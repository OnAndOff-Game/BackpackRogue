// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Login.proto
// Protobuf C++ Version: 5.27.1

#include "Login.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr LoginResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : token_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        error_message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        success_{false},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR LoginResponse::LoginResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct LoginResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginResponseDefaultTypeInternal() {}
  union {
    LoginResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginResponseDefaultTypeInternal _LoginResponse_default_instance_;

inline constexpr LoginRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : username_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        password_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR LoginRequest::LoginRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct LoginRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginRequestDefaultTypeInternal() {}
  union {
    LoginRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginRequestDefaultTypeInternal _LoginRequest_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Login_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Login_2eproto = nullptr;
const ::uint32_t
    TableStruct_Login_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::LoginRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::LoginRequest, _impl_.username_),
        PROTOBUF_FIELD_OFFSET(::LoginRequest, _impl_.password_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::LoginResponse, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::LoginResponse, _impl_.success_),
        PROTOBUF_FIELD_OFFSET(::LoginResponse, _impl_.token_),
        PROTOBUF_FIELD_OFFSET(::LoginResponse, _impl_.error_message_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::LoginRequest)},
        {10, -1, -1, sizeof(::LoginResponse)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_LoginRequest_default_instance_._instance,
    &::_LoginResponse_default_instance_._instance,
};
const char descriptor_table_protodef_Login_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\013Login.proto\"2\n\014LoginRequest\022\020\n\010usernam"
    "e\030\001 \001(\t\022\020\n\010password\030\002 \001(\t\"F\n\rLoginRespon"
    "se\022\017\n\007success\030\001 \001(\010\022\r\n\005token\030\002 \001(\t\022\025\n\rer"
    "ror_message\030\003 \001(\t25\n\013AuthService\022&\n\005Logi"
    "n\022\r.LoginRequest\032\016.LoginResponseb\006proto3"
};
static ::absl::once_flag descriptor_table_Login_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Login_2eproto = {
    false,
    false,
    200,
    descriptor_table_protodef_Login_2eproto,
    "Login.proto",
    &descriptor_table_Login_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_Login_2eproto::offsets,
    file_level_enum_descriptors_Login_2eproto,
    file_level_service_descriptors_Login_2eproto,
};
// ===================================================================

class LoginRequest::_Internal {
 public:
};

LoginRequest::LoginRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:LoginRequest)
}
inline PROTOBUF_NDEBUG_INLINE LoginRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::LoginRequest& from_msg)
      : username_(arena, from.username_),
        password_(arena, from.password_),
        _cached_size_{0} {}

LoginRequest::LoginRequest(
    ::google::protobuf::Arena* arena,
    const LoginRequest& from)
    : ::google::protobuf::Message(arena) {
  LoginRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:LoginRequest)
}
inline PROTOBUF_NDEBUG_INLINE LoginRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : username_(arena),
        password_(arena),
        _cached_size_{0} {}

inline void LoginRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
LoginRequest::~LoginRequest() {
  // @@protoc_insertion_point(destructor:LoginRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void LoginRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.username_.Destroy();
  _impl_.password_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
LoginRequest::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(LoginRequest, _impl_._cached_size_),
              false,
          },
          &LoginRequest::MergeImpl,
          &LoginRequest::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 37, 2> LoginRequest::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_LoginRequest_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::LoginRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string password = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(LoginRequest, _impl_.password_)}},
    // string username = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(LoginRequest, _impl_.username_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string username = 1;
    {PROTOBUF_FIELD_OFFSET(LoginRequest, _impl_.username_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string password = 2;
    {PROTOBUF_FIELD_OFFSET(LoginRequest, _impl_.password_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\14\10\10\0\0\0\0\0"
    "LoginRequest"
    "username"
    "password"
  }},
};

PROTOBUF_NOINLINE void LoginRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:LoginRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.username_.ClearToEmpty();
  _impl_.password_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* LoginRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LoginRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string username = 1;
  if (!this->_internal_username().empty()) {
    const std::string& _s = this->_internal_username();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "LoginRequest.username");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    const std::string& _s = this->_internal_password();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "LoginRequest.password");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoginRequest)
  return target;
}

::size_t LoginRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LoginRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string username = 1;
  if (!this->_internal_username().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_username());
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_password());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void LoginRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<LoginRequest*>(&to_msg);
  auto& from = static_cast<const LoginRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LoginRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_username().empty()) {
    _this->_internal_set_username(from._internal_username());
  }
  if (!from._internal_password().empty()) {
    _this->_internal_set_password(from._internal_password());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LoginRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void LoginRequest::InternalSwap(LoginRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.username_, &other->_impl_.username_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.password_, &other->_impl_.password_, arena);
}

::google::protobuf::Metadata LoginRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class LoginResponse::_Internal {
 public:
};

LoginResponse::LoginResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:LoginResponse)
}
inline PROTOBUF_NDEBUG_INLINE LoginResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::LoginResponse& from_msg)
      : token_(arena, from.token_),
        error_message_(arena, from.error_message_),
        _cached_size_{0} {}

LoginResponse::LoginResponse(
    ::google::protobuf::Arena* arena,
    const LoginResponse& from)
    : ::google::protobuf::Message(arena) {
  LoginResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.success_ = from._impl_.success_;

  // @@protoc_insertion_point(copy_constructor:LoginResponse)
}
inline PROTOBUF_NDEBUG_INLINE LoginResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : token_(arena),
        error_message_(arena),
        _cached_size_{0} {}

inline void LoginResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.success_ = {};
}
LoginResponse::~LoginResponse() {
  // @@protoc_insertion_point(destructor:LoginResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void LoginResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.token_.Destroy();
  _impl_.error_message_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
LoginResponse::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_._cached_size_),
              false,
          },
          &LoginResponse::MergeImpl,
          &LoginResponse::kDescriptorMethods,
          &descriptor_table_Login_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 40, 2> LoginResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_LoginResponse_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::LoginResponse>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // bool success = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(LoginResponse, _impl_.success_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.success_)}},
    // string token = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.token_)}},
    // string error_message = 3;
    {::_pbi::TcParser::FastUS1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.error_message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool success = 1;
    {PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.success_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // string token = 2;
    {PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.token_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string error_message = 3;
    {PROTOBUF_FIELD_OFFSET(LoginResponse, _impl_.error_message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\15\0\5\15\0\0\0\0"
    "LoginResponse"
    "token"
    "error_message"
  }},
};

PROTOBUF_NOINLINE void LoginResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:LoginResponse)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.token_.ClearToEmpty();
  _impl_.error_message_.ClearToEmpty();
  _impl_.success_ = false;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* LoginResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:LoginResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool success = 1;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_success(), target);
  }

  // string token = 2;
  if (!this->_internal_token().empty()) {
    const std::string& _s = this->_internal_token();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "LoginResponse.token");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // string error_message = 3;
  if (!this->_internal_error_message().empty()) {
    const std::string& _s = this->_internal_error_message();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "LoginResponse.error_message");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LoginResponse)
  return target;
}

::size_t LoginResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LoginResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string token = 2;
  if (!this->_internal_token().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_token());
  }

  // string error_message = 3;
  if (!this->_internal_error_message().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_error_message());
  }

  // bool success = 1;
  if (this->_internal_success() != 0) {
    total_size += 2;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void LoginResponse::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<LoginResponse*>(&to_msg);
  auto& from = static_cast<const LoginResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:LoginResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_token().empty()) {
    _this->_internal_set_token(from._internal_token());
  }
  if (!from._internal_error_message().empty()) {
    _this->_internal_set_error_message(from._internal_error_message());
  }
  if (from._internal_success() != 0) {
    _this->_impl_.success_ = from._impl_.success_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void LoginResponse::CopyFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void LoginResponse::InternalSwap(LoginResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.token_, &other->_impl_.token_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.error_message_, &other->_impl_.error_message_, arena);
        swap(_impl_.success_, other->_impl_.success_);
}

::google::protobuf::Metadata LoginResponse::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_Login_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
