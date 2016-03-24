<<<<<<< HEAD
#include <stdio.h>
#include <nan.h>
using namespace std;
using namespace v8;


// the pca analysis, the arguments are (@MatrixData, @LimitToReduce, @StatsArray)
void gsl_pca (const Nan::FunctionCallbackInfo<v8::Value>& info) {
      Handle<Array> array=Handle<Array>::Cast(info[0]);
        gsl_vector_set(Sigma,i,stats_sigma->Get(i)->NumberValue() );
      v8::Local<v8::Object> obj = Nan::New<v8::Object>();
      Handle<Array> R_array = Nan::New<v8::Array>((size_t) *count);
        R_array->Set(i, Nan::New(_S_->data[i]));
        V2_array[i]= Nan::New<v8::Array>(n);
            V2_array[i]->Set(j, Nan::New(gsl_matrix_get(_V_,j,i)));
      info.GetReturnValue().Set(obj);


  }

  void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {
  	v8::Local<v8::Object> obj = Nan::New<v8::Object>();
    v8::Local<v8::FunctionTemplate> tpl =
    Nan::New<v8::FunctionTemplate>(gsl_pca);
  	v8::Local<v8::Function> fn = tpl->GetFunction();
    v8::Local<v8::FunctionTemplate> tpl2 =
    Nan::New<v8::FunctionTemplate>(probability);
    v8::Local<v8::Function> fn2 = tpl2->GetFunction();
  	obj->Set(Nan::New("pca").ToLocalChecked(),fn);
    obj->Set(Nan::New("p_x").ToLocalChecked(),fn2);
  	module->Set(Nan::New("exports").ToLocalChecked(),obj);
  }

NODE_MODULE(newton, Init)
=======
#include<iostream>
#include <nan.h>
#include <stdio.h>
#define MAX 100
using namespace std;
using namespace v8;
class matrix {
    int i
    float **array
  public:
    matrix (int i){
      array = new float*[i]
      for (size_t j = 0; j < i; j++) {
        array[i] = new float[i]
        for (size_t k = 0; k < i; k++) {
          if (j===k) {
            array[j][k] = 1
          }else{
            array[j][k] = 0
          }
      }
    };
};
int lcm(int x,int y);

void gauss(const Nan::FunctionCallbackInfo<v8::Value>& info){
    int i,j,k,r,c,a[MAX][MAX],l,d1,d2;
    Handle<Array> array=Handle<Array>::Cast(info[0]);
    r = (int) array->Length();
    c = (int) Handle<Array>::Cast(array->Get(0))->Length();
    matrix inverse(r)
    Handle<Array> *_array = new Handle<Array>[r];
    if(r==c)
    {
       for(i=0;i<r;i++)
       {
         _array[i] = Handle<Array>::Cast(array->Get(i));
          for(j=0;j<c;j++)
          {
             a[i][j] =_array[i]->Get(j)->NumberValue();
          }
       }
       for(i=0;i<r-1;i++)
       {
           for(j=i+1;j<r;j++)
           {
             l=lcm(a[i][i],a[j][i]);
             if(l!=0&&(a[i][i]!=0&&a[j][i]!=0))
             {
               l=(a[i][i]*a[j][i])/l;
               d1=l/a[i][i];
               d2=l/a[j][i];
               a[j][i]=0;
               for(k=i+1;k<r;k++)
               {
                 a[j][k]=(d2*a[j][k])-(d1*a[i][k]);
                 matrix.array[]
               }
             }
           }
        }
        for(i=r-1;i>0;i--)
        {
           for(j=i-1;j>=0;j--)
           {
             l=lcm(a[i][i],a[j][i]);
             if(l!=0&&(a[i][i]!=0&&a[j][i]!=0))
             {
               l=(a[i][i]*a[j][i])/l;
               d1=l/a[i][i];
               d2=l/a[j][i];
               for(k=0;k<=r;k++)
               {
                 a[j][k]=(d2*a[j][k])-(d1*a[i][k]);
               }
             }
           }
        }
        for(i=0;i<r;i++)
        {
             a[i][j] = a[i][j]/a[i][j]
        }
     }
     else
     {
        cout<<"\nThis is not a Square Matrix!!!\n";
     }
     info.GetReturnValue();
}

int lcm(int x,int y)
{
    int t;
    while (y != 0)
    {
      t=y;
      y=x%y;
      x=t;
    }
    return x;
}

void CreateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(gauss);
  v8::Local<v8::Function> fn = tpl->GetFunction();

  // omit this to make it anonymous
  fn->SetName(Nan::New("theFunction").ToLocalChecked());

  info.GetReturnValue().Set(fn);
}

void Init(v8::Local<v8::Object> exports, v8::Local<v8::Object> module) {
  Nan::SetMethod(module, "exports", CreateFunction);
}

NODE_MODULE(gauss, Init)
>>>>>>> 2edbddc3ce169b6aaf51fa5f592f91d802eb0af0
