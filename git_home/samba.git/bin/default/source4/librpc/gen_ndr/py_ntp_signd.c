
/* Python wrapper functions auto-generated by pidl */
#define PY_SSIZE_T_CLEAN 1 /* We use Py_ssize_t for PyArg_ParseTupleAndKeywords */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_ntp_signd.h"
#include "bin/default/source4/librpc/gen_ndr/ndr_ntp_signd_c.h"

/*
 * These functions are here to ensure they can be optimized out by
 * the compiler based on the constant input values
 */

static inline unsigned long long ndr_sizeof2uintmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return UINT64_MAX;
	case 4:
		return UINT32_MAX;
	case 2:
		return UINT16_MAX;
	case 1:
		return UINT8_MAX;
	}

	return 0;
}

static inline long long ndr_sizeof2intmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return INT64_MAX;
	case 4:
		return INT32_MAX;
	case 2:
		return INT16_MAX;
	case 1:
		return INT8_MAX;
	}

	return 0;
}

static inline PyObject *ndr_PyLong_FromLongLong(long long v)
{
	if (v > LONG_MAX || v < LONG_MIN) {
		return PyLong_FromLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static inline PyObject *ndr_PyLong_FromUnsignedLongLong(unsigned long long v)
{
	if (v > LONG_MAX) {
		return PyLong_FromUnsignedLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static PyTypeObject sign_request_Type;
static PyTypeObject signed_reply_Type;
static PyTypeObject ntp_signd_InterfaceType;
static PyTypeObject decode_sign_requst_Type;

void initntp_signd(void);static PyTypeObject *BaseObject_Type;
static PyTypeObject *ClientConnection_Type;
static PyTypeObject *ndr_syntax_id_Type;

static PyObject *py_sign_request_get_version(PyObject *obj, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(obj);
	PyObject *py_version;
	py_version = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->version);
	return py_version;
}

static int py_sign_request_set_version(PyObject *py_obj, PyObject *value, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->version");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->version));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->version = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->version = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_sign_request_get_op(PyObject *obj, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(obj);
	PyObject *py_op;
	py_op = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->op);
	return py_op;
}

static int py_sign_request_set_op(PyObject *py_obj, PyObject *value, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->op");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->op));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->op = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->op = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_sign_request_get_packet_id(PyObject *obj, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(obj);
	PyObject *py_packet_id;
	py_packet_id = PyInt_FromLong((uint16_t)object->packet_id);
	return py_packet_id;
}

static int py_sign_request_set_packet_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->packet_id");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->packet_id));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->packet_id = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->packet_id = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_sign_request_get_key_id(PyObject *obj, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(obj);
	PyObject *py_key_id;
	py_key_id = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->key_id);
	return py_key_id;
}

static int py_sign_request_set_key_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->key_id");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->key_id));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->key_id = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->key_id = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_sign_request_get_packet_to_sign(PyObject *obj, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(obj);
	PyObject *py_packet_to_sign;
	py_packet_to_sign = PyString_FromStringAndSize((char *)(object->packet_to_sign).data, (object->packet_to_sign).length);
	return py_packet_to_sign;
}

static int py_sign_request_set_packet_to_sign(PyObject *py_obj, PyObject *value, void *closure)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->packet_to_sign");
		return -1;
	}
	object->packet_to_sign = data_blob_talloc(pytalloc_get_mem_ctx(py_obj), PyString_AS_STRING(value), PyString_GET_SIZE(value));
	return 0;
}

static PyGetSetDef py_sign_request_getsetters[] = {
	{
		.name = discard_const_p(char, "version"),
		.get = py_sign_request_get_version,
		.set = py_sign_request_set_version,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "op"),
		.get = py_sign_request_get_op,
		.set = py_sign_request_set_op,
		.doc = discard_const_p(char, "PIDL-generated element of base type ntp_signd_op")
	},
	{
		.name = discard_const_p(char, "packet_id"),
		.get = py_sign_request_get_packet_id,
		.set = py_sign_request_set_packet_id,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint16")
	},
	{
		.name = discard_const_p(char, "key_id"),
		.get = py_sign_request_get_key_id,
		.set = py_sign_request_set_key_id,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "packet_to_sign"),
		.get = py_sign_request_get_packet_to_sign,
		.set = py_sign_request_set_packet_to_sign,
		.doc = discard_const_p(char, "PIDL-generated element of base type DATA_BLOB")
	},
	{ .name = NULL }
};

static PyObject *py_sign_request_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct sign_request, type);
}

static PyObject *py_sign_request_ndr_pack(PyObject *py_obj)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;
	TALLOC_CTX *tmp_ctx = talloc_new(pytalloc_get_mem_ctx(py_obj));
	if (tmp_ctx == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}
	err = ndr_push_struct_blob(&blob, tmp_ctx, object, (ndr_push_flags_fn_t)ndr_push_sign_request);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(tmp_ctx);
		PyErr_SetNdrError(err);
		return NULL;
	}

	ret = PyString_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(tmp_ctx);
	return ret;
}

static PyObject *py_sign_request_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	enum ndr_err_code err;
	const char * const kwnames[] = { "data_blob", "allow_remaining", NULL };
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|O:__ndr_unpack__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	if (allow_remaining) {
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_sign_request);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_sign_request);
	}
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_sign_request_ndr_print(PyObject *py_obj)
{
	struct sign_request *object = (struct sign_request *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_sign_request, "sign_request", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_sign_request_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_sign_request_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_sign_request_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_sign_request_ndr_print, METH_NOARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject sign_request_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntp_signd.sign_request",
	.tp_getset = py_sign_request_getsetters,
	.tp_methods = py_sign_request_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_sign_request_new,
};


static PyObject *py_signed_reply_get_version(PyObject *obj, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(obj);
	PyObject *py_version;
	py_version = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->version);
	return py_version;
}

static int py_signed_reply_set_version(PyObject *py_obj, PyObject *value, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->version");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->version));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->version = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->version = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_signed_reply_get_op(PyObject *obj, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(obj);
	PyObject *py_op;
	py_op = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->op);
	return py_op;
}

static int py_signed_reply_set_op(PyObject *py_obj, PyObject *value, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->op");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->op));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->op = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->op = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_signed_reply_get_packet_id(PyObject *obj, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(obj);
	PyObject *py_packet_id;
	py_packet_id = ndr_PyLong_FromUnsignedLongLong((uint32_t)object->packet_id);
	return py_packet_id;
}

static int py_signed_reply_set_packet_id(PyObject *py_obj, PyObject *value, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->packet_id");
		return -1;
	}
	{
		const unsigned long long uint_max = ndr_sizeof2uintmax(sizeof(object->packet_id));
		if (PyLong_Check(value)) {
			unsigned long long test_var;
			test_var = PyLong_AsUnsignedLongLong(value);
			if (PyErr_Occurred() != NULL) {
				return -1;
			}
			if (test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %llu",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->packet_id = test_var;
		} else if (PyInt_Check(value)) {
			long test_var;
			test_var = PyInt_AsLong(value);
			if (test_var < 0 || test_var > uint_max) {
				PyErr_Format(PyExc_OverflowError, "Expected type %s or %s within range 0 - %llu, got %ld",\
				  PyInt_Type.tp_name, PyLong_Type.tp_name, uint_max, test_var);
				return -1;
			}
			object->packet_id = test_var;
		} else {
			PyErr_Format(PyExc_TypeError, "Expected type %s or %s",\
			  PyInt_Type.tp_name, PyLong_Type.tp_name);
			return -1;
		}
	}
	return 0;
}

static PyObject *py_signed_reply_get_signed_packet(PyObject *obj, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(obj);
	PyObject *py_signed_packet;
	py_signed_packet = PyString_FromStringAndSize((char *)(object->signed_packet).data, (object->signed_packet).length);
	return py_signed_packet;
}

static int py_signed_reply_set_signed_packet(PyObject *py_obj, PyObject *value, void *closure)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->signed_packet");
		return -1;
	}
	object->signed_packet = data_blob_talloc(pytalloc_get_mem_ctx(py_obj), PyString_AS_STRING(value), PyString_GET_SIZE(value));
	return 0;
}

static PyGetSetDef py_signed_reply_getsetters[] = {
	{
		.name = discard_const_p(char, "version"),
		.get = py_signed_reply_get_version,
		.set = py_signed_reply_set_version,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "op"),
		.get = py_signed_reply_get_op,
		.set = py_signed_reply_set_op,
		.doc = discard_const_p(char, "PIDL-generated element of base type ntp_signd_op")
	},
	{
		.name = discard_const_p(char, "packet_id"),
		.get = py_signed_reply_get_packet_id,
		.set = py_signed_reply_set_packet_id,
		.doc = discard_const_p(char, "PIDL-generated element of base type uint32")
	},
	{
		.name = discard_const_p(char, "signed_packet"),
		.get = py_signed_reply_get_signed_packet,
		.set = py_signed_reply_set_signed_packet,
		.doc = discard_const_p(char, "PIDL-generated element of base type DATA_BLOB")
	},
	{ .name = NULL }
};

static PyObject *py_signed_reply_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct signed_reply, type);
}

static PyObject *py_signed_reply_ndr_pack(PyObject *py_obj)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;
	TALLOC_CTX *tmp_ctx = talloc_new(pytalloc_get_mem_ctx(py_obj));
	if (tmp_ctx == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}
	err = ndr_push_struct_blob(&blob, tmp_ctx, object, (ndr_push_flags_fn_t)ndr_push_signed_reply);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(tmp_ctx);
		PyErr_SetNdrError(err);
		return NULL;
	}

	ret = PyString_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(tmp_ctx);
	return ret;
}

static PyObject *py_signed_reply_ndr_unpack(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	enum ndr_err_code err;
	const char * const kwnames[] = { "data_blob", "allow_remaining", NULL };
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|O:__ndr_unpack__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	if (allow_remaining) {
		err = ndr_pull_struct_blob(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_signed_reply);
	} else {
		err = ndr_pull_struct_blob_all(&blob, pytalloc_get_mem_ctx(py_obj), object, (ndr_pull_flags_fn_t)ndr_pull_signed_reply);
	}
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		PyErr_SetNdrError(err);
		return NULL;
	}

	Py_RETURN_NONE;
}

static PyObject *py_signed_reply_ndr_print(PyObject *py_obj)
{
	struct signed_reply *object = (struct signed_reply *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	retstr = ndr_print_struct_string(pytalloc_get_mem_ctx(py_obj), (ndr_print_fn_t)ndr_print_signed_reply, "signed_reply", object);
	ret = PyString_FromString(retstr);
	talloc_free(retstr);

	return ret;
}

static PyMethodDef py_signed_reply_methods[] = {
	{ "__ndr_pack__", (PyCFunction)py_signed_reply_ndr_pack, METH_NOARGS, "S.ndr_pack(object) -> blob\nNDR pack" },
	{ "__ndr_unpack__", (PyCFunction)py_signed_reply_ndr_unpack, METH_VARARGS|METH_KEYWORDS, "S.ndr_unpack(class, blob, allow_remaining=False) -> None\nNDR unpack" },
	{ "__ndr_print__", (PyCFunction)py_signed_reply_ndr_print, METH_NOARGS, "S.ndr_print(object) -> None\nNDR print" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject signed_reply_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntp_signd.signed_reply",
	.tp_getset = py_signed_reply_getsetters,
	.tp_methods = py_signed_reply_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_signed_reply_new,
};



static PyObject *py_decode_sign_requst_in_get_request(PyObject *obj, void *closure)
{
	struct decode_sign_requst *object = (struct decode_sign_requst *)pytalloc_get_ptr(obj);
	PyObject *py_request;
	py_request = pytalloc_reference_ex(&sign_request_Type, pytalloc_get_mem_ctx(obj), &object->in.request);
	return py_request;
}

static int py_decode_sign_requst_in_set_request(PyObject *py_obj, PyObject *value, void *closure)
{
	struct decode_sign_requst *object = (struct decode_sign_requst *)pytalloc_get_ptr(py_obj);
	if (value == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct object->in.request");
		return -1;
	}
	PY_CHECK_TYPE(&sign_request_Type, value, return -1;);
	if (talloc_reference(pytalloc_get_mem_ctx(py_obj), pytalloc_get_mem_ctx(value)) == NULL) {
		PyErr_NoMemory();
		return -1;
	}
	object->in.request = *(struct sign_request *)pytalloc_get_ptr(value);
	return 0;
}

static PyGetSetDef py_decode_sign_requst_getsetters[] = {
	{
		.name = discard_const_p(char, "in_request"),
		.get = py_decode_sign_requst_in_get_request,
		.set = py_decode_sign_requst_in_set_request,
		.doc = discard_const_p(char, "PIDL-generated element of base type sign_request")
	},
	{ .name = NULL }
};

static PyObject *py_decode_sign_requst_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return pytalloc_new(struct decode_sign_requst, type);
}

static PyObject *py_decode_sign_requst_ndr_opnum(PyTypeObject *type)
{


	return PyInt_FromLong(0);
}

static PyObject *py_decode_sign_requst_ndr_pack(PyObject *py_obj, int ndr_inout_flags, uint32_t ndr_push_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_sign_requst *object = (struct decode_sign_requst *)pytalloc_get_ptr(py_obj);
	PyObject *ret = NULL;
	struct ndr_push *push = NULL;
	DATA_BLOB blob;
	enum ndr_err_code err;

	if (ndr_table_ntp_signd.num_calls < 0) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_sign_requst_ndr_pack");
		return NULL;
	}
	call = &ndr_table_ntp_signd.calls[0];

	push = ndr_push_init_ctx(pytalloc_get_mem_ctx(py_obj));
	if (push == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}

	push->flags |= ndr_push_flags;

	err = call->ndr_push(push, ndr_inout_flags, object);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(push);
		PyErr_SetNdrError(err);
		return NULL;
	}
	blob = ndr_push_blob(push);
	ret = PyString_FromStringAndSize((char *)blob.data, blob.length);
	TALLOC_FREE(push);
	return ret;
}

static PyObject *py_decode_sign_requst_ndr_pack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	const char * const kwnames[] = { "bigendian", "ndr64", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_push_flags = 0;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|OO:__ndr_pack_in__",
		discard_const_p(char *, kwnames),
		&bigendian_obj,
		&ndr64_obj)) {
		return NULL;
	}

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_NDR64;
	}

	return py_decode_sign_requst_ndr_pack(py_obj, NDR_IN, ndr_push_flags);
}

static PyObject *py_decode_sign_requst_ndr_pack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	const char * const kwnames[] = { "bigendian", "ndr64", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_push_flags = 0;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "|OO:__ndr_pack_out__",
		discard_const_p(char *, kwnames),
		&bigendian_obj,
		&ndr64_obj)) {
		return NULL;
	}

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_push_flags |= LIBNDR_FLAG_NDR64;
	}

	return py_decode_sign_requst_ndr_pack(py_obj, NDR_OUT, ndr_push_flags);
}

static PyObject *py_decode_sign_requst_ndr_unpack(PyObject *py_obj, const DATA_BLOB *blob, int ndr_inout_flags, uint32_t ndr_pull_flags, bool allow_remaining)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_sign_requst *object = (struct decode_sign_requst *)pytalloc_get_ptr(py_obj);
	struct ndr_pull *pull = NULL;
	enum ndr_err_code err;

	if (ndr_table_ntp_signd.num_calls < 0) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_sign_requst_ndr_unpack");
		return NULL;
	}
	call = &ndr_table_ntp_signd.calls[0];

	pull = ndr_pull_init_blob(blob, object);
	if (pull == NULL) {
		PyErr_SetNdrError(NDR_ERR_ALLOC);
		return NULL;
	}

	pull->flags |= ndr_pull_flags;

	err = call->ndr_pull(pull, ndr_inout_flags, object);
	if (!NDR_ERR_CODE_IS_SUCCESS(err)) {
		TALLOC_FREE(pull);
		PyErr_SetNdrError(err);
		return NULL;
	}
	if (!allow_remaining) {
		uint32_t highest_ofs;

		if (pull->offset > pull->relative_highest_offset) {
			highest_ofs = pull->offset;
		} else {
			highest_ofs = pull->relative_highest_offset;
		}
		if (highest_ofs < pull->data_size) {
			err = ndr_pull_error(pull, NDR_ERR_UNREAD_BYTES,
				"not all bytes consumed ofs[%u] size[%u]",
				highest_ofs, pull->data_size);
			TALLOC_FREE(pull);
			PyErr_SetNdrError(err);
			return NULL;
		}
	}

	TALLOC_FREE(pull);
	Py_RETURN_NONE;
}

static PyObject *py_decode_sign_requst_ndr_unpack_in(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	const char * const kwnames[] = { "data_blob", "bigendian", "ndr64", "allow_remaining", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_pull_flags = LIBNDR_FLAG_REF_ALLOC;
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|OOO:__ndr_unpack_in__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&bigendian_obj,
		&ndr64_obj,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_NDR64;
	}

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	return py_decode_sign_requst_ndr_unpack(py_obj, &blob, NDR_IN, ndr_pull_flags, allow_remaining);
}

static PyObject *py_decode_sign_requst_ndr_unpack_out(PyObject *py_obj, PyObject *args, PyObject *kwargs)
{
	DATA_BLOB blob;
	Py_ssize_t blob_length = 0;
	const char * const kwnames[] = { "data_blob", "bigendian", "ndr64", "allow_remaining", NULL };
	PyObject *bigendian_obj = NULL;
	PyObject *ndr64_obj = NULL;
	uint32_t ndr_pull_flags = LIBNDR_FLAG_REF_ALLOC;
	PyObject *allow_remaining_obj = NULL;
	bool allow_remaining = false;

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "s#|OOO:__ndr_unpack_out__",
		discard_const_p(char *, kwnames),
		&blob.data, &blob_length,
		&bigendian_obj,
		&ndr64_obj,
		&allow_remaining_obj)) {
		return NULL;
	}
	blob.length = blob_length;

	if (bigendian_obj && PyObject_IsTrue(bigendian_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_BIGENDIAN;
	}
	if (ndr64_obj && PyObject_IsTrue(ndr64_obj)) {
		ndr_pull_flags |= LIBNDR_FLAG_NDR64;
	}

	if (allow_remaining_obj && PyObject_IsTrue(allow_remaining_obj)) {
		allow_remaining = true;
	}

	return py_decode_sign_requst_ndr_unpack(py_obj, &blob, NDR_OUT, ndr_pull_flags, allow_remaining);
}

static PyObject *py_decode_sign_requst_ndr_print(PyObject *py_obj, const char *name, int ndr_inout_flags)
{
	const struct ndr_interface_call *call = NULL;
	struct decode_sign_requst *object = (struct decode_sign_requst *)pytalloc_get_ptr(py_obj);
	PyObject *ret;
	char *retstr;

	if (ndr_table_ntp_signd.num_calls < 0) {
		PyErr_SetString(PyExc_TypeError, "Internal Error, ndr_interface_call missing for py_decode_sign_requst_ndr_print");
		return NULL;
	}
	call = &ndr_table_ntp_signd.calls[0];

	retstr = ndr_print_function_string(pytalloc_get_mem_ctx(py_obj), call->ndr_print, name, ndr_inout_flags, object);
	ret = PyString_FromString(retstr);
	TALLOC_FREE(retstr);

	return ret;
}

static PyObject *py_decode_sign_requst_ndr_print_in(PyObject *py_obj)
{
	return py_decode_sign_requst_ndr_print(py_obj, "decode_sign_requst_in", NDR_IN);
}

static PyObject *py_decode_sign_requst_ndr_print_out(PyObject *py_obj)
{
	return py_decode_sign_requst_ndr_print(py_obj, "decode_sign_requst_out", NDR_OUT);
}

static PyMethodDef py_decode_sign_requst_methods[] = {
	{ "opnum", (PyCFunction)py_decode_sign_requst_ndr_opnum, METH_NOARGS|METH_CLASS,
		"ntp_signd.decode_sign_requst.opnum() -> 0 (0x00) " },
	{ "__ndr_pack_in__", (PyCFunction)py_decode_sign_requst_ndr_pack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_in(object, bigendian=False, ndr64=False) -> blob\nNDR pack input" },
	{ "__ndr_pack_out__", (PyCFunction)py_decode_sign_requst_ndr_pack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_pack_out(object, bigendian=False, ndr64=False) -> blob\nNDR pack output" },
	{ "__ndr_unpack_in__", (PyCFunction)py_decode_sign_requst_ndr_unpack_in, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_in(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack input" },
	{ "__ndr_unpack_out__", (PyCFunction)py_decode_sign_requst_ndr_unpack_out, METH_VARARGS|METH_KEYWORDS,
		"S.ndr_unpack_out(class, blob, bigendian=False, ndr64=False, allow_remaining=False) -> None\nNDR unpack output" },
	{ "__ndr_print_in__", (PyCFunction)py_decode_sign_requst_ndr_print_in, METH_NOARGS, "S.ndr_print_in(object) -> None\nNDR print input" },
	{ "__ndr_print_out__", (PyCFunction)py_decode_sign_requst_ndr_print_out, METH_NOARGS, "S.ndr_print_out(object) -> None\nNDR print output" },
	{ NULL, NULL, 0, NULL }
};


static PyTypeObject decode_sign_requst_Type = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntp_signd.decode_sign_requst",
	.tp_getset = py_decode_sign_requst_getsetters,
	.tp_methods = py_decode_sign_requst_methods,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = py_decode_sign_requst_new,
};

static bool pack_py_decode_sign_requst_args_in(PyObject *args, PyObject *kwargs, struct decode_sign_requst *r)
{
	PyObject *py_request;
	const char *kwnames[] = {
		"request", NULL
	};

	if (!PyArg_ParseTupleAndKeywords(args, kwargs, "O:decode_sign_requst", discard_const_p(char *, kwnames), &py_request)) {
		return false;
	}

	if (py_request == NULL) {
		PyErr_Format(PyExc_AttributeError, "Cannot delete NDR object: struct r->in.request");
		return false;
	}
	PY_CHECK_TYPE(&sign_request_Type, py_request, return false;);
	if (talloc_reference(r, pytalloc_get_mem_ctx(py_request)) == NULL) {
		PyErr_NoMemory();
		return false;
	}
	r->in.request = *(struct sign_request *)pytalloc_get_ptr(py_request);
	return true;
}

static PyObject *unpack_py_decode_sign_requst_args_out(struct decode_sign_requst *r)
{
	PyObject *result;
	result = Py_None;
	Py_INCREF(result);
	return result;
}

const struct PyNdrRpcMethodDef py_ndr_ntp_signd_methods[] = {
	{ "decode_sign_requst", "S.decode_sign_requst(request) -> None", (py_dcerpc_call_fn)dcerpc_decode_sign_requst_r, (py_data_pack_fn)pack_py_decode_sign_requst_args_in, (py_data_unpack_fn)unpack_py_decode_sign_requst_args_out, 0, &ndr_table_ntp_signd },
	{ NULL }
};

static PyObject *interface_ntp_signd_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_ntp_signd);
}

static PyTypeObject ntp_signd_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntp_signd.ntp_signd",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "ntp_signd(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n",
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_ntp_signd_new,
};

static PyObject *syntax_ntp_signd_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_syntax_init_helper(type, args, kwargs, &ndr_table_ntp_signd.syntax_id);
}

static PyTypeObject ntp_signd_SyntaxType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "ntp_signd.ntp_signd_abstract_syntax",
	.tp_doc = "ntp_signd_abstract_syntax()\n",
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = syntax_ntp_signd_new,
};

static PyMethodDef ntp_signd_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initntp_signd(void)
{
	PyObject *m;
	PyObject *dep_talloc;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_samba_dcerpc_misc;

	dep_talloc = PyImport_ImportModule("talloc");
	if (dep_talloc == NULL)
		return;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return;

	BaseObject_Type = (PyTypeObject *)PyObject_GetAttrString(dep_talloc, "BaseObject");
	if (BaseObject_Type == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	ndr_syntax_id_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_misc, "ndr_syntax_id");
	if (ndr_syntax_id_Type == NULL)
		return;

	sign_request_Type.tp_base = BaseObject_Type;
	sign_request_Type.tp_basicsize = pytalloc_BaseObject_size();

	signed_reply_Type.tp_base = BaseObject_Type;
	signed_reply_Type.tp_basicsize = pytalloc_BaseObject_size();

	decode_sign_requst_Type.tp_base = BaseObject_Type;
	decode_sign_requst_Type.tp_basicsize = pytalloc_BaseObject_size();

	ntp_signd_InterfaceType.tp_base = ClientConnection_Type;

	ntp_signd_SyntaxType.tp_base = ndr_syntax_id_Type;
	ntp_signd_SyntaxType.tp_basicsize = pytalloc_BaseObject_size();

	if (PyType_Ready(&sign_request_Type) < 0)
		return;
	if (PyType_Ready(&signed_reply_Type) < 0)
		return;
	if (PyType_Ready(&decode_sign_requst_Type) < 0)
		return;
	if (PyType_Ready(&ntp_signd_InterfaceType) < 0)
		return;
	if (PyType_Ready(&ntp_signd_SyntaxType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&ntp_signd_InterfaceType, py_ndr_ntp_signd_methods))
		return;

#ifdef PY_SIGN_REQUEST_PATCH
	PY_SIGN_REQUEST_PATCH(&sign_request_Type);
#endif
#ifdef PY_SIGNED_REPLY_PATCH
	PY_SIGNED_REPLY_PATCH(&signed_reply_Type);
#endif
#ifdef PY_DECODE_SIGN_REQUST_PATCH
	PY_DECODE_SIGN_REQUST_PATCH(&decode_sign_requst_Type);
#endif
#ifdef PY_NTP_SIGND_PATCH
	PY_NTP_SIGND_PATCH(&ntp_signd_InterfaceType);
#endif
#ifdef PY_NTP_SIGND_ABSTRACT_SYNTAX_PATCH
	PY_NTP_SIGND_ABSTRACT_SYNTAX_PATCH(&ntp_signd_SyntaxType);
#endif
#ifdef PY_ABSTRACT_SYNTAX_PATCH
	PY_ABSTRACT_SYNTAX_PATCH(&ntp_signd_SyntaxType);
#endif

	m = Py_InitModule3("ntp_signd", ntp_signd_methods, "ntp_signd DCE/RPC");
	if (m == NULL)
		return;

	PyModule_AddObject(m, "NTP_SIGND_PROTOCOL_VERSION_0", ndr_PyLong_FromUnsignedLongLong(0));
	PyModule_AddObject(m, "SIGN_TO_CLIENT", ndr_PyLong_FromUnsignedLongLong((uint32_t)SIGN_TO_CLIENT));
	PyModule_AddObject(m, "ASK_SERVER_TO_SIGN", ndr_PyLong_FromUnsignedLongLong((uint32_t)ASK_SERVER_TO_SIGN));
	PyModule_AddObject(m, "CHECK_SERVER_SIGNATURE", ndr_PyLong_FromUnsignedLongLong((uint32_t)CHECK_SERVER_SIGNATURE));
	PyModule_AddObject(m, "SIGNING_SUCCESS", ndr_PyLong_FromUnsignedLongLong((uint32_t)SIGNING_SUCCESS));
	PyModule_AddObject(m, "SIGNING_FAILURE", ndr_PyLong_FromUnsignedLongLong((uint32_t)SIGNING_FAILURE));
	Py_INCREF((PyObject *)(void *)&sign_request_Type);
	PyModule_AddObject(m, "sign_request", (PyObject *)(void *)&sign_request_Type);
	Py_INCREF((PyObject *)(void *)&signed_reply_Type);
	PyModule_AddObject(m, "signed_reply", (PyObject *)(void *)&signed_reply_Type);
	Py_INCREF((PyObject *)(void *)&decode_sign_requst_Type);
	PyModule_AddObject(m, "decode_sign_requst", (PyObject *)(void *)&decode_sign_requst_Type);
	Py_INCREF((PyObject *)(void *)&ntp_signd_InterfaceType);
	PyModule_AddObject(m, "ntp_signd", (PyObject *)(void *)&ntp_signd_InterfaceType);
	Py_INCREF((PyObject *)(void *)&ntp_signd_SyntaxType);
	PyModule_AddObject(m, "ntp_signd_abstract_syntax", (PyObject *)(void *)&ntp_signd_SyntaxType);
	Py_INCREF((PyObject *)(void *)&ntp_signd_SyntaxType);
	PyModule_AddObject(m, "abstract_syntax", (PyObject *)(void *)&ntp_signd_SyntaxType);
#ifdef PY_MOD_NTP_SIGND_PATCH
	PY_MOD_NTP_SIGND_PATCH(m);
#endif

}
