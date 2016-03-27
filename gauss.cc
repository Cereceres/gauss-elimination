#include<iostream>
#include <nan.h>
#include <stdio.h>
using namespace std;
using namespace v8;
void gauss(const Nan::FunctionCallbackInfo<v8::Value>& info){
    int i,j,k,r; double d1,d2;
    Handle<Array> array=Handle<Array>::Cast(info[0]);
    r = (int) array->Length();
    double *inverse[r],*a[r];
    for (j = 0; j < r; j++) {
      inverse[j] = new double[r];
      for ( k = 0; k < r; k++) {
        if (j==k) {
          inverse[j][k] =(double) 1;
        }else{
          inverse[j][k] = (double) 0;
        }
    }
  }
  Handle<Array> *_array = new Handle<Array>[r];
     for(i=0;i<r;i++)
     {
       _array[i] = Handle<Array>::Cast(array->Get(i));
       a[i] = new double[r];
        for(j=0;j<r;j++)
        {
           a[i][j] =(double) _array[i]->Get(j)->NumberValue();
        }
     }
     for(i=0;i<(r-1);i++)
     {
       if (a[i][i]==0) {
         for(j=i+1;j<r;j++)
         {
           if (a[j][i]!=0) {
             d2 =(double) a[i][i];
             a[i][i] = a[j][i];
             a[j][i] = d2;
              for(k=i+1;k<r;k++)
             {
               d2 =(double) a[i][k];
               a[i][k] = a[j][k];
               a[j][k] = d2;
             }
             break;
           }
         }
       }
        if (a[i][i]==0) {return;}
       for(j=i+1;j<r;j++)
       {
         if (a[j][i]==0) {continue;}
         d1 =(double) a[i][i]/a[j][i];
         for(k=0;k<r;k++)
         {
           a[j][k]=(double)(d1*a[j][k]-a[i][k]);
            inverse[j][k]=(double)(d1*inverse[j][k]-inverse[i][k]);
         }

       }
    }
      for(i=r-1;i>0;i--)
      {
        if (a[i][i]==0) {return ; }
         for(j=i-1;j>=0;j--)
         {
           if(a[j][i]==0)
           {continue;}
             d1=(double) a[j][i]/a[i][i];
             a[j][i] =0;
             for(k=0;k<r;k++){
               inverse[j][k]=(double)(inverse[j][k]-d1*inverse[i][k]);
             }

         }
      }
    Handle<Array> V_array = Nan::New<v8::Array>((size_t) r);
    Handle<Array> *_array_  = new Handle<Array> [ r];
    bool test=true;
    for(i=0;i<r;i++)
    {
    _array_[i] = Nan::New<v8::Array>((size_t) r);
      for ( j = 0; j < r; j++) {
        if (a[i][i]!= 0) {
           _array_[i]->Set(j, Nan::New<v8::Number>(inverse[i][j]/a[i][i]));
        }else{
          test = false;
          return;
        }
      }
      V_array->Set(i,_array_[i]);
    }
    if (test) {
    info.GetReturnValue().Set(V_array);
   }

}


void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(gauss);
  v8::Local<v8::Function> fn = tpl->GetFunction();
  // omit this to make it anonymous
  fn->SetName(Nan::New("theFunction").ToLocalChecked());
  module->Set(Nan::New("exports").ToLocalChecked(),fn);
}

NODE_MODULE(gauss, Init)
