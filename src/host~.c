#include "m_pd.h"

static t_class *host_tilde_class;

typedef struct _host_tilde {
  t_object  x_obj;
} t_host_tilde;

void host_tilde_bang(t_host_tilde *x)
{
  post("This is the host~ object");
}

void *host_tilde_new(void)
{
  t_host_tilde *x = (t_host_tilde *)pd_new(host_tilde_class);

  return (void *)x;
}

void host_tilde_setup(void) {
  host_tilde_class = class_new(gensym("host~"),
        (t_newmethod)host_tilde_new,
        0, sizeof(t_host_tilde),
        CLASS_DEFAULT, 0);
  class_addbang(host_tilde_class, host_tilde_bang);
}