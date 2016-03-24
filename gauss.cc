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
