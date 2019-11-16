#ifndef OPA_CONTEXT_H
#define OPA_CONTEXT_H

#include "value.h"

typedef struct
{
    opa_value *input;
    opa_value *data;
    opa_value *result;
} opa_eval_ctx_t;

opa_eval_ctx_t *opa_eval_ctx_new();
void opa_eval_ctx_set_input(opa_eval_ctx_t *ctx, opa_value *v);
void opa_eval_ctx_set_data(opa_eval_ctx_t *ctx, opa_value *v);
opa_value *opa_eval_ctx_get_result(opa_eval_ctx_t *ctx);

#endif