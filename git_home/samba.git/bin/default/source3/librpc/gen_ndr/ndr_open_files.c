/* parser auto-generated by pidl */

#include "includes.h"
#include "bin/default/source3/librpc/gen_ndr/ndr_open_files.h"

#include "librpc/gen_ndr/ndr_server_id.h"
#include "librpc/gen_ndr/ndr_security.h"
#include "librpc/gen_ndr/ndr_file_id.h"
#include "librpc/gen_ndr/ndr_smb2_lease_struct.h"
#include "librpc/gen_ndr/ndr_misc.h"
_PUBLIC_ enum ndr_err_code ndr_push_share_mode_lease(struct ndr_push *ndr, int ndr_flags, const struct share_mode_lease *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_push_align(ndr, 8));
			NDR_CHECK(ndr_push_GUID(ndr, NDR_SCALARS, &r->client_guid));
			NDR_CHECK(ndr_push_smb2_lease_key(ndr, NDR_SCALARS, &r->lease_key));
			NDR_CHECK(ndr_push_smb2_lease_state(ndr, NDR_SCALARS, r->current_state));
			NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->breaking));
			NDR_CHECK(ndr_push_smb2_lease_state(ndr, NDR_SCALARS, r->breaking_to_requested));
			NDR_CHECK(ndr_push_smb2_lease_state(ndr, NDR_SCALARS, r->breaking_to_required));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->lease_version));
			NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->epoch));
			NDR_CHECK(ndr_push_trailer_align(ndr, 8));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_share_mode_lease(struct ndr_pull *ndr, int ndr_flags, struct share_mode_lease *r)
{
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
		if (ndr_flags & NDR_SCALARS) {
			NDR_CHECK(ndr_pull_align(ndr, 8));
			NDR_CHECK(ndr_pull_GUID(ndr, NDR_SCALARS, &r->client_guid));
			NDR_CHECK(ndr_pull_smb2_lease_key(ndr, NDR_SCALARS, &r->lease_key));
			NDR_CHECK(ndr_pull_smb2_lease_state(ndr, NDR_SCALARS, &r->current_state));
			NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->breaking));
			NDR_CHECK(ndr_pull_smb2_lease_state(ndr, NDR_SCALARS, &r->breaking_to_requested));
			NDR_CHECK(ndr_pull_smb2_lease_state(ndr, NDR_SCALARS, &r->breaking_to_required));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->lease_version));
			NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->epoch));
			NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
		}
		if (ndr_flags & NDR_BUFFERS) {
		}
		ndr->flags = _flags_save_STRUCT;
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_share_mode_lease(struct ndr_print *ndr, const char *name, const struct share_mode_lease *r)
{
	ndr_print_struct(ndr, name, "share_mode_lease");
	if (r == NULL) { ndr_print_null(ndr); return; }
	{
		uint32_t _flags_save_STRUCT = ndr->flags;
		ndr_set_flags(&ndr->flags, LIBNDR_PRINT_ARRAY_HEX);
		ndr->depth++;
		ndr_print_GUID(ndr, "client_guid", &r->client_guid);
		ndr_print_smb2_lease_key(ndr, "lease_key", &r->lease_key);
		ndr_print_smb2_lease_state(ndr, "current_state", r->current_state);
		ndr_print_uint8(ndr, "breaking", r->breaking);
		ndr_print_smb2_lease_state(ndr, "breaking_to_requested", r->breaking_to_requested);
		ndr_print_smb2_lease_state(ndr, "breaking_to_required", r->breaking_to_required);
		ndr_print_uint16(ndr, "lease_version", r->lease_version);
		ndr_print_uint16(ndr, "epoch", r->epoch);
		ndr->depth--;
		ndr->flags = _flags_save_STRUCT;
	}
}

_PUBLIC_ enum ndr_err_code ndr_push_share_mode_entry(struct ndr_push *ndr, int ndr_flags, const struct share_mode_entry *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_server_id(ndr, NDR_SCALARS, &r->pid));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->op_mid));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->op_type));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->lease_idx));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->access_mask));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->share_access));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->private_options));
		NDR_CHECK(ndr_push_timeval(ndr, NDR_SCALARS, &r->time));
		NDR_CHECK(ndr_push_file_id(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_push_udlong(ndr, NDR_SCALARS, r->share_file_id));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->uid));
		NDR_CHECK(ndr_push_uint16(ndr, NDR_SCALARS, r->flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->name_hash));
		/* [skip] 'r->stale' */
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->lease));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_timeval(ndr, NDR_BUFFERS, &r->time));
		if (r->lease) {
			/* [skip] 'r->lease' */
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_share_mode_entry(struct ndr_pull *ndr, int ndr_flags, struct share_mode_entry *r)
{
	uint32_t _ptr_lease;
	TALLOC_CTX *_mem_save_lease_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_server_id(ndr, NDR_SCALARS, &r->pid));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->op_mid));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->op_type));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->lease_idx));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->access_mask));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->share_access));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->private_options));
		NDR_CHECK(ndr_pull_timeval(ndr, NDR_SCALARS, &r->time));
		NDR_CHECK(ndr_pull_file_id(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_pull_udlong(ndr, NDR_SCALARS, &r->share_file_id));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->uid));
		NDR_CHECK(ndr_pull_uint16(ndr, NDR_SCALARS, &r->flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->name_hash));
		/* [skip] '&r->stale' */
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_lease));
		if (_ptr_lease) {
			NDR_PULL_ALLOC(ndr, r->lease);
		} else {
			r->lease = NULL;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_timeval(ndr, NDR_BUFFERS, &r->time));
		if (r->lease) {
			_mem_save_lease_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->lease, 0);
			/* [skip] 'r->lease' */
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_lease_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_share_mode_entry(struct ndr_print *ndr, const char *name, const struct share_mode_entry *r)
{
	ndr_print_struct(ndr, name, "share_mode_entry");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_server_id(ndr, "pid", &r->pid);
	ndr_print_hyper(ndr, "op_mid", r->op_mid);
	ndr_print_uint16(ndr, "op_type", r->op_type);
	ndr_print_uint32(ndr, "lease_idx", r->lease_idx);
	ndr_print_uint32(ndr, "access_mask", r->access_mask);
	ndr_print_uint32(ndr, "share_access", r->share_access);
	ndr_print_uint32(ndr, "private_options", r->private_options);
	ndr_print_timeval(ndr, "time", &r->time);
	ndr_print_file_id(ndr, "id", &r->id);
	ndr_print_udlong(ndr, "share_file_id", r->share_file_id);
	ndr_print_uint32(ndr, "uid", r->uid);
	ndr_print_uint16(ndr, "flags", r->flags);
	ndr_print_uint32(ndr, "name_hash", r->name_hash);
	ndr_print_uint8(ndr, "stale", r->stale);
	ndr_print_ptr(ndr, "lease", r->lease);
	ndr->depth++;
	if (r->lease) {
		ndr_print_share_mode_lease(ndr, "lease", r->lease);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_delete_token(struct ndr_push *ndr, int ndr_flags, const struct delete_token *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 5));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->name_hash));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->delete_nt_token));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->delete_token));
		NDR_CHECK(ndr_push_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->delete_nt_token) {
			NDR_CHECK(ndr_push_security_token(ndr, NDR_SCALARS, r->delete_nt_token));
		}
		if (r->delete_token) {
			NDR_CHECK(ndr_push_security_unix_token(ndr, NDR_SCALARS, r->delete_token));
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_delete_token(struct ndr_pull *ndr, int ndr_flags, struct delete_token *r)
{
	uint32_t _ptr_delete_nt_token;
	TALLOC_CTX *_mem_save_delete_nt_token_0 = NULL;
	uint32_t _ptr_delete_token;
	TALLOC_CTX *_mem_save_delete_token_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 5));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->name_hash));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_delete_nt_token));
		if (_ptr_delete_nt_token) {
			NDR_PULL_ALLOC(ndr, r->delete_nt_token);
		} else {
			r->delete_nt_token = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_delete_token));
		if (_ptr_delete_token) {
			NDR_PULL_ALLOC(ndr, r->delete_token);
		} else {
			r->delete_token = NULL;
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 5));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->delete_nt_token) {
			_mem_save_delete_nt_token_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->delete_nt_token, 0);
			NDR_CHECK(ndr_pull_security_token(ndr, NDR_SCALARS, r->delete_nt_token));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_delete_nt_token_0, 0);
		}
		if (r->delete_token) {
			_mem_save_delete_token_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->delete_token, 0);
			NDR_CHECK(ndr_pull_security_unix_token(ndr, NDR_SCALARS, r->delete_token));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_delete_token_0, 0);
		}
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_delete_token(struct ndr_print *ndr, const char *name, const struct delete_token *r)
{
	ndr_print_struct(ndr, name, "delete_token");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_uint32(ndr, "name_hash", r->name_hash);
	ndr_print_ptr(ndr, "delete_nt_token", r->delete_nt_token);
	ndr->depth++;
	if (r->delete_nt_token) {
		ndr_print_security_token(ndr, "delete_nt_token", r->delete_nt_token);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "delete_token", r->delete_token);
	ndr->depth++;
	if (r->delete_token) {
		ndr_print_security_unix_token(ndr, "delete_token", r->delete_token);
	}
	ndr->depth--;
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_share_mode_data(struct ndr_push *ndr, int ndr_flags, const struct share_mode_data *r)
{
	uint32_t cntr_share_modes_0;
	uint32_t cntr_leases_0;
	uint32_t cntr_delete_tokens_0;
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->sequence_number));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->servicepath));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->base_name));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->stream_name));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_share_modes));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_share_modes));
		for (cntr_share_modes_0 = 0; cntr_share_modes_0 < (r->num_share_modes); cntr_share_modes_0++) {
			NDR_CHECK(ndr_push_share_mode_entry(ndr, NDR_SCALARS, &r->share_modes[cntr_share_modes_0]));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_leases));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_leases));
		for (cntr_leases_0 = 0; cntr_leases_0 < (r->num_leases); cntr_leases_0++) {
			NDR_CHECK(ndr_push_share_mode_lease(ndr, NDR_SCALARS, &r->leases[cntr_leases_0]));
		}
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->num_delete_tokens));
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, r->num_delete_tokens));
		for (cntr_delete_tokens_0 = 0; cntr_delete_tokens_0 < (r->num_delete_tokens); cntr_delete_tokens_0++) {
			NDR_CHECK(ndr_push_delete_token(ndr, NDR_SCALARS, &r->delete_tokens[cntr_delete_tokens_0]));
		}
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->old_write_time));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->changed_write_time));
		/* [skip] 'r->fresh' */
		/* [skip] 'r->modified' */
		NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
		/* [ignore] 'record' */
		NDR_CHECK(ndr_push_file_id(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->servicepath) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->servicepath, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->servicepath, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->servicepath, ndr_charset_length(r->servicepath, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		}
		if (r->base_name) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->base_name, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->base_name, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->base_name, ndr_charset_length(r->base_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		}
		if (r->stream_name) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->stream_name, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->stream_name, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->stream_name, ndr_charset_length(r->stream_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		}
		for (cntr_share_modes_0 = 0; cntr_share_modes_0 < (r->num_share_modes); cntr_share_modes_0++) {
			NDR_CHECK(ndr_push_share_mode_entry(ndr, NDR_BUFFERS, &r->share_modes[cntr_share_modes_0]));
		}
		for (cntr_delete_tokens_0 = 0; cntr_delete_tokens_0 < (r->num_delete_tokens); cntr_delete_tokens_0++) {
			NDR_CHECK(ndr_push_delete_token(ndr, NDR_BUFFERS, &r->delete_tokens[cntr_delete_tokens_0]));
		}
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->old_write_time));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->changed_write_time));
		/* [ignore] 'record' */
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_share_mode_data(struct ndr_pull *ndr, int ndr_flags, struct share_mode_data *r)
{
	uint32_t _ptr_servicepath;
	uint32_t size_servicepath_1 = 0;
	uint32_t length_servicepath_1 = 0;
	TALLOC_CTX *_mem_save_servicepath_0 = NULL;
	uint32_t _ptr_base_name;
	uint32_t size_base_name_1 = 0;
	uint32_t length_base_name_1 = 0;
	TALLOC_CTX *_mem_save_base_name_0 = NULL;
	uint32_t _ptr_stream_name;
	uint32_t size_stream_name_1 = 0;
	uint32_t length_stream_name_1 = 0;
	TALLOC_CTX *_mem_save_stream_name_0 = NULL;
	uint32_t size_share_modes_0 = 0;
	uint32_t cntr_share_modes_0;
	TALLOC_CTX *_mem_save_share_modes_0 = NULL;
	uint32_t size_leases_0 = 0;
	uint32_t cntr_leases_0;
	TALLOC_CTX *_mem_save_leases_0 = NULL;
	uint32_t size_delete_tokens_0 = 0;
	uint32_t cntr_delete_tokens_0;
	TALLOC_CTX *_mem_save_delete_tokens_0 = NULL;
	uint32_t _ptr_record;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->sequence_number));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servicepath));
		if (_ptr_servicepath) {
			NDR_PULL_ALLOC(ndr, r->servicepath);
		} else {
			r->servicepath = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_base_name));
		if (_ptr_base_name) {
			NDR_PULL_ALLOC(ndr, r->base_name);
		} else {
			r->base_name = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_stream_name));
		if (_ptr_stream_name) {
			NDR_PULL_ALLOC(ndr, r->stream_name);
		} else {
			r->stream_name = NULL;
		}
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_share_modes));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->share_modes));
		size_share_modes_0 = ndr_get_array_size(ndr, &r->share_modes);
		NDR_PULL_ALLOC_N(ndr, r->share_modes, size_share_modes_0);
		_mem_save_share_modes_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->share_modes, 0);
		for (cntr_share_modes_0 = 0; cntr_share_modes_0 < (size_share_modes_0); cntr_share_modes_0++) {
			NDR_CHECK(ndr_pull_share_mode_entry(ndr, NDR_SCALARS, &r->share_modes[cntr_share_modes_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_share_modes_0, 0);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_leases));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->leases));
		size_leases_0 = ndr_get_array_size(ndr, &r->leases);
		NDR_PULL_ALLOC_N(ndr, r->leases, size_leases_0);
		_mem_save_leases_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->leases, 0);
		for (cntr_leases_0 = 0; cntr_leases_0 < (size_leases_0); cntr_leases_0++) {
			NDR_CHECK(ndr_pull_share_mode_lease(ndr, NDR_SCALARS, &r->leases[cntr_leases_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_leases_0, 0);
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->num_delete_tokens));
		NDR_CHECK(ndr_pull_array_size(ndr, &r->delete_tokens));
		size_delete_tokens_0 = ndr_get_array_size(ndr, &r->delete_tokens);
		NDR_PULL_ALLOC_N(ndr, r->delete_tokens, size_delete_tokens_0);
		_mem_save_delete_tokens_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->delete_tokens, 0);
		for (cntr_delete_tokens_0 = 0; cntr_delete_tokens_0 < (size_delete_tokens_0); cntr_delete_tokens_0++) {
			NDR_CHECK(ndr_pull_delete_token(ndr, NDR_SCALARS, &r->delete_tokens[cntr_delete_tokens_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_delete_tokens_0, 0);
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->old_write_time));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->changed_write_time));
		/* [skip] '&r->fresh' */
		/* [skip] '&r->modified' */
		NDR_CHECK(ndr_pull_uint3264(ndr, NDR_SCALARS, &_ptr_record));
		_ptr_record = 0;
		if (_ptr_record) {
		} else {
			r->record = NULL;
		}
		/* [ignore] 'record' */
		NDR_CHECK(ndr_pull_file_id(ndr, NDR_SCALARS, &r->id));
		if (r->share_modes) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->share_modes, r->num_share_modes));
		}
		if (r->leases) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->leases, r->num_leases));
		}
		if (r->delete_tokens) {
			NDR_CHECK(ndr_check_array_size(ndr, (void*)&r->delete_tokens, r->num_delete_tokens));
		}
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->servicepath) {
			_mem_save_servicepath_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->servicepath, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->servicepath));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->servicepath));
			size_servicepath_1 = ndr_get_array_size(ndr, &r->servicepath);
			length_servicepath_1 = ndr_get_array_length(ndr, &r->servicepath);
			if (length_servicepath_1 > size_servicepath_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_servicepath_1, length_servicepath_1);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_servicepath_1, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->servicepath, length_servicepath_1, sizeof(uint8_t), CH_UTF8));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servicepath_0, 0);
		}
		if (r->base_name) {
			_mem_save_base_name_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->base_name, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->base_name));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->base_name));
			size_base_name_1 = ndr_get_array_size(ndr, &r->base_name);
			length_base_name_1 = ndr_get_array_length(ndr, &r->base_name);
			if (length_base_name_1 > size_base_name_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_base_name_1, length_base_name_1);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_base_name_1, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->base_name, length_base_name_1, sizeof(uint8_t), CH_UTF8));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_base_name_0, 0);
		}
		if (r->stream_name) {
			_mem_save_stream_name_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->stream_name, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->stream_name));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->stream_name));
			size_stream_name_1 = ndr_get_array_size(ndr, &r->stream_name);
			length_stream_name_1 = ndr_get_array_length(ndr, &r->stream_name);
			if (length_stream_name_1 > size_stream_name_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_stream_name_1, length_stream_name_1);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_stream_name_1, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->stream_name, length_stream_name_1, sizeof(uint8_t), CH_UTF8));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_stream_name_0, 0);
		}
		size_share_modes_0 = ndr_get_array_size(ndr, &r->share_modes);
		_mem_save_share_modes_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->share_modes, 0);
		for (cntr_share_modes_0 = 0; cntr_share_modes_0 < (size_share_modes_0); cntr_share_modes_0++) {
			NDR_CHECK(ndr_pull_share_mode_entry(ndr, NDR_BUFFERS, &r->share_modes[cntr_share_modes_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_share_modes_0, 0);
		size_delete_tokens_0 = ndr_get_array_size(ndr, &r->delete_tokens);
		_mem_save_delete_tokens_0 = NDR_PULL_GET_MEM_CTX(ndr);
		NDR_PULL_SET_MEM_CTX(ndr, r->delete_tokens, 0);
		for (cntr_delete_tokens_0 = 0; cntr_delete_tokens_0 < (size_delete_tokens_0); cntr_delete_tokens_0++) {
			NDR_CHECK(ndr_pull_delete_token(ndr, NDR_BUFFERS, &r->delete_tokens[cntr_delete_tokens_0]));
		}
		NDR_PULL_SET_MEM_CTX(ndr, _mem_save_delete_tokens_0, 0);
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->old_write_time));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->changed_write_time));
		/* [ignore] 'record' */
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_share_mode_data(struct ndr_print *ndr, const char *name, const struct share_mode_data *r)
{
	uint32_t cntr_share_modes_0;
	uint32_t cntr_leases_0;
	uint32_t cntr_delete_tokens_0;
	ndr_print_struct(ndr, name, "share_mode_data");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_hyper(ndr, "sequence_number", r->sequence_number);
	ndr_print_ptr(ndr, "servicepath", r->servicepath);
	ndr->depth++;
	if (r->servicepath) {
		ndr_print_string(ndr, "servicepath", r->servicepath);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "base_name", r->base_name);
	ndr->depth++;
	if (r->base_name) {
		ndr_print_string(ndr, "base_name", r->base_name);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "stream_name", r->stream_name);
	ndr->depth++;
	if (r->stream_name) {
		ndr_print_string(ndr, "stream_name", r->stream_name);
	}
	ndr->depth--;
	ndr_print_uint32(ndr, "num_share_modes", r->num_share_modes);
	ndr->print(ndr, "%s: ARRAY(%d)", "share_modes", (int)r->num_share_modes);
	ndr->depth++;
	for (cntr_share_modes_0 = 0; cntr_share_modes_0 < (r->num_share_modes); cntr_share_modes_0++) {
		ndr_print_share_mode_entry(ndr, "share_modes", &r->share_modes[cntr_share_modes_0]);
	}
	ndr->depth--;
	ndr_print_uint32(ndr, "num_leases", r->num_leases);
	ndr->print(ndr, "%s: ARRAY(%d)", "leases", (int)r->num_leases);
	ndr->depth++;
	for (cntr_leases_0 = 0; cntr_leases_0 < (r->num_leases); cntr_leases_0++) {
		ndr_print_share_mode_lease(ndr, "leases", &r->leases[cntr_leases_0]);
	}
	ndr->depth--;
	ndr_print_uint32(ndr, "num_delete_tokens", r->num_delete_tokens);
	ndr->print(ndr, "%s: ARRAY(%d)", "delete_tokens", (int)r->num_delete_tokens);
	ndr->depth++;
	for (cntr_delete_tokens_0 = 0; cntr_delete_tokens_0 < (r->num_delete_tokens); cntr_delete_tokens_0++) {
		ndr_print_delete_token(ndr, "delete_tokens", &r->delete_tokens[cntr_delete_tokens_0]);
	}
	ndr->depth--;
	ndr_print_timespec(ndr, "old_write_time", &r->old_write_time);
	ndr_print_timespec(ndr, "changed_write_time", &r->changed_write_time);
	ndr_print_uint8(ndr, "fresh", r->fresh);
	ndr_print_uint8(ndr, "modified", r->modified);
	ndr_print_ptr(ndr, "record", r->record);
	/* [ignore] 'record' */
	ndr_print_file_id(ndr, "id", &r->id);
	ndr->depth--;
}

static enum ndr_err_code ndr_push_vfs_default_durable_stat(struct ndr_push *ndr, int ndr_flags, const struct vfs_default_durable_stat *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_dev));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_ino));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_mode));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_nlink));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_uid));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_gid));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_rdev));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_size));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->st_ex_atime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->st_ex_mtime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->st_ex_ctime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->st_ex_btime));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->st_ex_calculated_birthtime));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_blksize));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->st_ex_blocks));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->st_ex_flags));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, r->st_ex_mask));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->st_ex_atime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->st_ex_mtime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->st_ex_ctime));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->st_ex_btime));
	}
	return NDR_ERR_SUCCESS;
}

static enum ndr_err_code ndr_pull_vfs_default_durable_stat(struct ndr_pull *ndr, int ndr_flags, struct vfs_default_durable_stat *r)
{
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_dev));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_ino));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_mode));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_nlink));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_uid));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_gid));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_rdev));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_size));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->st_ex_atime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->st_ex_mtime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->st_ex_ctime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->st_ex_btime));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->st_ex_calculated_birthtime));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_blksize));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->st_ex_blocks));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->st_ex_flags));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->st_ex_mask));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->st_ex_atime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->st_ex_mtime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->st_ex_ctime));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->st_ex_btime));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_vfs_default_durable_stat(struct ndr_print *ndr, const char *name, const struct vfs_default_durable_stat *r)
{
	ndr_print_struct(ndr, name, "vfs_default_durable_stat");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_hyper(ndr, "st_ex_dev", r->st_ex_dev);
	ndr_print_hyper(ndr, "st_ex_ino", r->st_ex_ino);
	ndr_print_hyper(ndr, "st_ex_mode", r->st_ex_mode);
	ndr_print_hyper(ndr, "st_ex_nlink", r->st_ex_nlink);
	ndr_print_hyper(ndr, "st_ex_uid", r->st_ex_uid);
	ndr_print_hyper(ndr, "st_ex_gid", r->st_ex_gid);
	ndr_print_hyper(ndr, "st_ex_rdev", r->st_ex_rdev);
	ndr_print_hyper(ndr, "st_ex_size", r->st_ex_size);
	ndr_print_timespec(ndr, "st_ex_atime", &r->st_ex_atime);
	ndr_print_timespec(ndr, "st_ex_mtime", &r->st_ex_mtime);
	ndr_print_timespec(ndr, "st_ex_ctime", &r->st_ex_ctime);
	ndr_print_timespec(ndr, "st_ex_btime", &r->st_ex_btime);
	ndr_print_uint8(ndr, "st_ex_calculated_birthtime", r->st_ex_calculated_birthtime);
	ndr_print_hyper(ndr, "st_ex_blksize", r->st_ex_blksize);
	ndr_print_hyper(ndr, "st_ex_blocks", r->st_ex_blocks);
	ndr_print_uint32(ndr, "st_ex_flags", r->st_ex_flags);
	ndr_print_uint32(ndr, "st_ex_mask", r->st_ex_mask);
	ndr->depth--;
}

_PUBLIC_ enum ndr_err_code ndr_push_vfs_default_durable_cookie(struct ndr_push *ndr, int ndr_flags, const struct vfs_default_durable_cookie *r)
{
	NDR_PUSH_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_push_align(ndr, 8));
		NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, VFS_DEFAULT_DURABLE_COOKIE_MAGIC, 0x30, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_push_uint32(ndr, NDR_SCALARS, VFS_DEFAULT_DURABLE_COOKIE_VERSION));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->allow_reconnect));
		NDR_CHECK(ndr_push_file_id(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->servicepath));
		NDR_CHECK(ndr_push_unique_ptr(ndr, r->base_name));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->initial_allocation_size));
		NDR_CHECK(ndr_push_hyper(ndr, NDR_SCALARS, r->position_information));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->update_write_time_triggered));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->update_write_time_on_close));
		NDR_CHECK(ndr_push_uint8(ndr, NDR_SCALARS, r->write_time_forced));
		NDR_CHECK(ndr_push_timespec(ndr, NDR_SCALARS, &r->close_write_time));
		NDR_CHECK(ndr_push_vfs_default_durable_stat(ndr, NDR_SCALARS, &r->stat_info));
		NDR_CHECK(ndr_push_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->servicepath) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->servicepath, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->servicepath, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->servicepath, ndr_charset_length(r->servicepath, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		}
		if (r->base_name) {
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->base_name, CH_UTF8)));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, 0));
			NDR_CHECK(ndr_push_uint3264(ndr, NDR_SCALARS, ndr_charset_length(r->base_name, CH_UTF8)));
			NDR_CHECK(ndr_push_charset(ndr, NDR_SCALARS, r->base_name, ndr_charset_length(r->base_name, CH_UTF8), sizeof(uint8_t), CH_UTF8));
		}
		NDR_CHECK(ndr_push_timespec(ndr, NDR_BUFFERS, &r->close_write_time));
		NDR_CHECK(ndr_push_vfs_default_durable_stat(ndr, NDR_BUFFERS, &r->stat_info));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ enum ndr_err_code ndr_pull_vfs_default_durable_cookie(struct ndr_pull *ndr, int ndr_flags, struct vfs_default_durable_cookie *r)
{
	uint32_t size_magic_0 = 0;
	uint32_t _ptr_servicepath;
	uint32_t size_servicepath_1 = 0;
	uint32_t length_servicepath_1 = 0;
	TALLOC_CTX *_mem_save_servicepath_0 = NULL;
	uint32_t _ptr_base_name;
	uint32_t size_base_name_1 = 0;
	uint32_t length_base_name_1 = 0;
	TALLOC_CTX *_mem_save_base_name_0 = NULL;
	NDR_PULL_CHECK_FLAGS(ndr, ndr_flags);
	if (ndr_flags & NDR_SCALARS) {
		NDR_CHECK(ndr_pull_align(ndr, 8));
		size_magic_0 = 0x30;
		NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->magic, size_magic_0, sizeof(uint8_t), CH_DOS));
		NDR_CHECK(ndr_pull_uint32(ndr, NDR_SCALARS, &r->version));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->allow_reconnect));
		NDR_CHECK(ndr_pull_file_id(ndr, NDR_SCALARS, &r->id));
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_servicepath));
		if (_ptr_servicepath) {
			NDR_PULL_ALLOC(ndr, r->servicepath);
		} else {
			r->servicepath = NULL;
		}
		NDR_CHECK(ndr_pull_generic_ptr(ndr, &_ptr_base_name));
		if (_ptr_base_name) {
			NDR_PULL_ALLOC(ndr, r->base_name);
		} else {
			r->base_name = NULL;
		}
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->initial_allocation_size));
		NDR_CHECK(ndr_pull_hyper(ndr, NDR_SCALARS, &r->position_information));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->update_write_time_triggered));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->update_write_time_on_close));
		NDR_CHECK(ndr_pull_uint8(ndr, NDR_SCALARS, &r->write_time_forced));
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_SCALARS, &r->close_write_time));
		NDR_CHECK(ndr_pull_vfs_default_durable_stat(ndr, NDR_SCALARS, &r->stat_info));
		NDR_CHECK(ndr_pull_trailer_align(ndr, 8));
	}
	if (ndr_flags & NDR_BUFFERS) {
		if (r->servicepath) {
			_mem_save_servicepath_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->servicepath, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->servicepath));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->servicepath));
			size_servicepath_1 = ndr_get_array_size(ndr, &r->servicepath);
			length_servicepath_1 = ndr_get_array_length(ndr, &r->servicepath);
			if (length_servicepath_1 > size_servicepath_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_servicepath_1, length_servicepath_1);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_servicepath_1, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->servicepath, length_servicepath_1, sizeof(uint8_t), CH_UTF8));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_servicepath_0, 0);
		}
		if (r->base_name) {
			_mem_save_base_name_0 = NDR_PULL_GET_MEM_CTX(ndr);
			NDR_PULL_SET_MEM_CTX(ndr, r->base_name, 0);
			NDR_CHECK(ndr_pull_array_size(ndr, &r->base_name));
			NDR_CHECK(ndr_pull_array_length(ndr, &r->base_name));
			size_base_name_1 = ndr_get_array_size(ndr, &r->base_name);
			length_base_name_1 = ndr_get_array_length(ndr, &r->base_name);
			if (length_base_name_1 > size_base_name_1) {
				return ndr_pull_error(ndr, NDR_ERR_ARRAY_SIZE, "Bad array size %u should exceed array length %u", size_base_name_1, length_base_name_1);
			}
			NDR_CHECK(ndr_check_string_terminator(ndr, length_base_name_1, sizeof(uint8_t)));
			NDR_CHECK(ndr_pull_charset(ndr, NDR_SCALARS, &r->base_name, length_base_name_1, sizeof(uint8_t), CH_UTF8));
			NDR_PULL_SET_MEM_CTX(ndr, _mem_save_base_name_0, 0);
		}
		NDR_CHECK(ndr_pull_timespec(ndr, NDR_BUFFERS, &r->close_write_time));
		NDR_CHECK(ndr_pull_vfs_default_durable_stat(ndr, NDR_BUFFERS, &r->stat_info));
	}
	return NDR_ERR_SUCCESS;
}

_PUBLIC_ void ndr_print_vfs_default_durable_cookie(struct ndr_print *ndr, const char *name, const struct vfs_default_durable_cookie *r)
{
	ndr_print_struct(ndr, name, "vfs_default_durable_cookie");
	if (r == NULL) { ndr_print_null(ndr); return; }
	ndr->depth++;
	ndr_print_string(ndr, "magic", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?VFS_DEFAULT_DURABLE_COOKIE_MAGIC:r->magic);
	ndr_print_uint32(ndr, "version", (ndr->flags & LIBNDR_PRINT_SET_VALUES)?VFS_DEFAULT_DURABLE_COOKIE_VERSION:r->version);
	ndr_print_uint8(ndr, "allow_reconnect", r->allow_reconnect);
	ndr_print_file_id(ndr, "id", &r->id);
	ndr_print_ptr(ndr, "servicepath", r->servicepath);
	ndr->depth++;
	if (r->servicepath) {
		ndr_print_string(ndr, "servicepath", r->servicepath);
	}
	ndr->depth--;
	ndr_print_ptr(ndr, "base_name", r->base_name);
	ndr->depth++;
	if (r->base_name) {
		ndr_print_string(ndr, "base_name", r->base_name);
	}
	ndr->depth--;
	ndr_print_hyper(ndr, "initial_allocation_size", r->initial_allocation_size);
	ndr_print_hyper(ndr, "position_information", r->position_information);
	ndr_print_uint8(ndr, "update_write_time_triggered", r->update_write_time_triggered);
	ndr_print_uint8(ndr, "update_write_time_on_close", r->update_write_time_on_close);
	ndr_print_uint8(ndr, "write_time_forced", r->write_time_forced);
	ndr_print_timespec(ndr, "close_write_time", &r->close_write_time);
	ndr_print_vfs_default_durable_stat(ndr, "stat_info", &r->stat_info);
	ndr->depth--;
}

