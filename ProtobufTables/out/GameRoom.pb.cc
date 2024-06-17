// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: GameRoom.proto
// Protobuf C++ Version: 5.27.1

#include "GameRoom.pb.h"

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

inline constexpr Player::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : user_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        nickname_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        score_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR Player::Player(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct PlayerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PlayerDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PlayerDefaultTypeInternal() {}
  union {
    Player _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PlayerDefaultTypeInternal _Player_default_instance_;

inline constexpr JoinRoomRequest::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : user_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        room_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR JoinRoomRequest::JoinRoomRequest(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct JoinRoomRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR JoinRoomRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~JoinRoomRequestDefaultTypeInternal() {}
  union {
    JoinRoomRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 JoinRoomRequestDefaultTypeInternal _JoinRoomRequest_default_instance_;

inline constexpr JoinRoomResponse::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : players_{},
        error_message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        success_{false},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR JoinRoomResponse::JoinRoomResponse(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct JoinRoomResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR JoinRoomResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~JoinRoomResponseDefaultTypeInternal() {}
  union {
    JoinRoomResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 JoinRoomResponseDefaultTypeInternal _JoinRoomResponse_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_GameRoom_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_GameRoom_2eproto = nullptr;
const ::uint32_t
    TableStruct_GameRoom_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::JoinRoomRequest, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::JoinRoomRequest, _impl_.user_id_),
        PROTOBUF_FIELD_OFFSET(::JoinRoomRequest, _impl_.room_id_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::JoinRoomResponse, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::JoinRoomResponse, _impl_.success_),
        PROTOBUF_FIELD_OFFSET(::JoinRoomResponse, _impl_.error_message_),
        PROTOBUF_FIELD_OFFSET(::JoinRoomResponse, _impl_.players_),
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Player, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::Player, _impl_.user_id_),
        PROTOBUF_FIELD_OFFSET(::Player, _impl_.nickname_),
        PROTOBUF_FIELD_OFFSET(::Player, _impl_.score_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::JoinRoomRequest)},
        {10, -1, -1, sizeof(::JoinRoomResponse)},
        {21, -1, -1, sizeof(::Player)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_JoinRoomRequest_default_instance_._instance,
    &::_JoinRoomResponse_default_instance_._instance,
    &::_Player_default_instance_._instance,
};
const char descriptor_table_protodef_GameRoom_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\016GameRoom.proto\"3\n\017JoinRoomRequest\022\017\n\007u"
    "ser_id\030\001 \001(\t\022\017\n\007room_id\030\002 \001(\t\"T\n\020JoinRoo"
    "mResponse\022\017\n\007success\030\001 \001(\010\022\025\n\rerror_mess"
    "age\030\002 \001(\t\022\030\n\007players\030\003 \003(\0132\007.Player\":\n\006P"
    "layer\022\017\n\007user_id\030\001 \001(\t\022\020\n\010nickname\030\002 \001(\t"
    "\022\r\n\005score\030\003 \001(\0052B\n\017GameRoomService\022/\n\010Jo"
    "inRoom\022\020.JoinRoomRequest\032\021.JoinRoomRespo"
    "nseb\006proto3"
};
static ::absl::once_flag descriptor_table_GameRoom_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_GameRoom_2eproto = {
    false,
    false,
    291,
    descriptor_table_protodef_GameRoom_2eproto,
    "GameRoom.proto",
    &descriptor_table_GameRoom_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_GameRoom_2eproto::offsets,
    file_level_enum_descriptors_GameRoom_2eproto,
    file_level_service_descriptors_GameRoom_2eproto,
};
// ===================================================================

class JoinRoomRequest::_Internal {
 public:
};

JoinRoomRequest::JoinRoomRequest(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:JoinRoomRequest)
}
inline PROTOBUF_NDEBUG_INLINE JoinRoomRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::JoinRoomRequest& from_msg)
      : user_id_(arena, from.user_id_),
        room_id_(arena, from.room_id_),
        _cached_size_{0} {}

JoinRoomRequest::JoinRoomRequest(
    ::google::protobuf::Arena* arena,
    const JoinRoomRequest& from)
    : ::google::protobuf::Message(arena) {
  JoinRoomRequest* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);

  // @@protoc_insertion_point(copy_constructor:JoinRoomRequest)
}
inline PROTOBUF_NDEBUG_INLINE JoinRoomRequest::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : user_id_(arena),
        room_id_(arena),
        _cached_size_{0} {}

inline void JoinRoomRequest::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
JoinRoomRequest::~JoinRoomRequest() {
  // @@protoc_insertion_point(destructor:JoinRoomRequest)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void JoinRoomRequest::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.user_id_.Destroy();
  _impl_.room_id_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
JoinRoomRequest::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(JoinRoomRequest, _impl_._cached_size_),
              false,
          },
          &JoinRoomRequest::MergeImpl,
          &JoinRoomRequest::kDescriptorMethods,
          &descriptor_table_GameRoom_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 38, 2> JoinRoomRequest::_table_ = {
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
    &_JoinRoomRequest_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::JoinRoomRequest>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // string room_id = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(JoinRoomRequest, _impl_.room_id_)}},
    // string user_id = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(JoinRoomRequest, _impl_.user_id_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string user_id = 1;
    {PROTOBUF_FIELD_OFFSET(JoinRoomRequest, _impl_.user_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string room_id = 2;
    {PROTOBUF_FIELD_OFFSET(JoinRoomRequest, _impl_.room_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\17\7\7\0\0\0\0\0"
    "JoinRoomRequest"
    "user_id"
    "room_id"
  }},
};

PROTOBUF_NOINLINE void JoinRoomRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:JoinRoomRequest)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.user_id_.ClearToEmpty();
  _impl_.room_id_.ClearToEmpty();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* JoinRoomRequest::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:JoinRoomRequest)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string user_id = 1;
  if (!this->_internal_user_id().empty()) {
    const std::string& _s = this->_internal_user_id();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "JoinRoomRequest.user_id");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string room_id = 2;
  if (!this->_internal_room_id().empty()) {
    const std::string& _s = this->_internal_room_id();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "JoinRoomRequest.room_id");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:JoinRoomRequest)
  return target;
}

::size_t JoinRoomRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:JoinRoomRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string user_id = 1;
  if (!this->_internal_user_id().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_user_id());
  }

  // string room_id = 2;
  if (!this->_internal_room_id().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_room_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void JoinRoomRequest::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<JoinRoomRequest*>(&to_msg);
  auto& from = static_cast<const JoinRoomRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:JoinRoomRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_user_id().empty()) {
    _this->_internal_set_user_id(from._internal_user_id());
  }
  if (!from._internal_room_id().empty()) {
    _this->_internal_set_room_id(from._internal_room_id());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void JoinRoomRequest::CopyFrom(const JoinRoomRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:JoinRoomRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void JoinRoomRequest::InternalSwap(JoinRoomRequest* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.user_id_, &other->_impl_.user_id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.room_id_, &other->_impl_.room_id_, arena);
}

::google::protobuf::Metadata JoinRoomRequest::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class JoinRoomResponse::_Internal {
 public:
};

JoinRoomResponse::JoinRoomResponse(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:JoinRoomResponse)
}
inline PROTOBUF_NDEBUG_INLINE JoinRoomResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::JoinRoomResponse& from_msg)
      : players_{visibility, arena, from.players_},
        error_message_(arena, from.error_message_),
        _cached_size_{0} {}

JoinRoomResponse::JoinRoomResponse(
    ::google::protobuf::Arena* arena,
    const JoinRoomResponse& from)
    : ::google::protobuf::Message(arena) {
  JoinRoomResponse* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.success_ = from._impl_.success_;

  // @@protoc_insertion_point(copy_constructor:JoinRoomResponse)
}
inline PROTOBUF_NDEBUG_INLINE JoinRoomResponse::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : players_{visibility, arena},
        error_message_(arena),
        _cached_size_{0} {}

inline void JoinRoomResponse::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.success_ = {};
}
JoinRoomResponse::~JoinRoomResponse() {
  // @@protoc_insertion_point(destructor:JoinRoomResponse)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void JoinRoomResponse::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.error_message_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
JoinRoomResponse::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_._cached_size_),
              false,
          },
          &JoinRoomResponse::MergeImpl,
          &JoinRoomResponse::kDescriptorMethods,
          &descriptor_table_GameRoom_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 1, 38, 2> JoinRoomResponse::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_JoinRoomResponse_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::JoinRoomResponse>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // bool success = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(JoinRoomResponse, _impl_.success_), 63>(),
     {8, 63, 0, PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.success_)}},
    // string error_message = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.error_message_)}},
    // repeated .Player players = 3;
    {::_pbi::TcParser::FastMtR1,
     {26, 63, 0, PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.players_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bool success = 1;
    {PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.success_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBool)},
    // string error_message = 2;
    {PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.error_message_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // repeated .Player players = 3;
    {PROTOBUF_FIELD_OFFSET(JoinRoomResponse, _impl_.players_), 0, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::Player>()},
  }}, {{
    "\20\0\15\0\0\0\0\0"
    "JoinRoomResponse"
    "error_message"
  }},
};

PROTOBUF_NOINLINE void JoinRoomResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:JoinRoomResponse)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.players_.Clear();
  _impl_.error_message_.ClearToEmpty();
  _impl_.success_ = false;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* JoinRoomResponse::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:JoinRoomResponse)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // bool success = 1;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(
        1, this->_internal_success(), target);
  }

  // string error_message = 2;
  if (!this->_internal_error_message().empty()) {
    const std::string& _s = this->_internal_error_message();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "JoinRoomResponse.error_message");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // repeated .Player players = 3;
  for (unsigned i = 0, n = static_cast<unsigned>(
                           this->_internal_players_size());
       i < n; i++) {
    const auto& repfield = this->_internal_players().Get(i);
    target =
        ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
            3, repfield, repfield.GetCachedSize(),
            target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:JoinRoomResponse)
  return target;
}

::size_t JoinRoomResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:JoinRoomResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // repeated .Player players = 3;
  total_size += 1UL * this->_internal_players_size();
  for (const auto& msg : this->_internal_players()) {
    total_size += ::google::protobuf::internal::WireFormatLite::MessageSize(msg);
  }
  // string error_message = 2;
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


void JoinRoomResponse::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<JoinRoomResponse*>(&to_msg);
  auto& from = static_cast<const JoinRoomResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:JoinRoomResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_players()->MergeFrom(
      from._internal_players());
  if (!from._internal_error_message().empty()) {
    _this->_internal_set_error_message(from._internal_error_message());
  }
  if (from._internal_success() != 0) {
    _this->_impl_.success_ = from._impl_.success_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void JoinRoomResponse::CopyFrom(const JoinRoomResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:JoinRoomResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void JoinRoomResponse::InternalSwap(JoinRoomResponse* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.players_.InternalSwap(&other->_impl_.players_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.error_message_, &other->_impl_.error_message_, arena);
        swap(_impl_.success_, other->_impl_.success_);
}

::google::protobuf::Metadata JoinRoomResponse::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// ===================================================================

class Player::_Internal {
 public:
};

Player::Player(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Player)
}
inline PROTOBUF_NDEBUG_INLINE Player::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::Player& from_msg)
      : user_id_(arena, from.user_id_),
        nickname_(arena, from.nickname_),
        _cached_size_{0} {}

Player::Player(
    ::google::protobuf::Arena* arena,
    const Player& from)
    : ::google::protobuf::Message(arena) {
  Player* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.score_ = from._impl_.score_;

  // @@protoc_insertion_point(copy_constructor:Player)
}
inline PROTOBUF_NDEBUG_INLINE Player::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : user_id_(arena),
        nickname_(arena),
        _cached_size_{0} {}

inline void Player::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.score_ = {};
}
Player::~Player() {
  // @@protoc_insertion_point(destructor:Player)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Player::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.user_id_.Destroy();
  _impl_.nickname_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
Player::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Player, _impl_._cached_size_),
              false,
          },
          &Player::MergeImpl,
          &Player::kDescriptorMethods,
          &descriptor_table_GameRoom_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 30, 2> Player::_table_ = {
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
    &_Player_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Player>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string user_id = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(Player, _impl_.user_id_)}},
    // string nickname = 2;
    {::_pbi::TcParser::FastUS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(Player, _impl_.nickname_)}},
    // int32 score = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(Player, _impl_.score_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(Player, _impl_.score_)}},
  }}, {{
    65535, 65535
  }}, {{
    // string user_id = 1;
    {PROTOBUF_FIELD_OFFSET(Player, _impl_.user_id_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // string nickname = 2;
    {PROTOBUF_FIELD_OFFSET(Player, _impl_.nickname_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // int32 score = 3;
    {PROTOBUF_FIELD_OFFSET(Player, _impl_.score_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
    "\6\7\10\0\0\0\0\0"
    "Player"
    "user_id"
    "nickname"
  }},
};

PROTOBUF_NOINLINE void Player::Clear() {
// @@protoc_insertion_point(message_clear_start:Player)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.user_id_.ClearToEmpty();
  _impl_.nickname_.ClearToEmpty();
  _impl_.score_ = 0;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Player::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Player)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string user_id = 1;
  if (!this->_internal_user_id().empty()) {
    const std::string& _s = this->_internal_user_id();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Player.user_id");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    const std::string& _s = this->_internal_nickname();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "Player.nickname");
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  // int32 score = 3;
  if (this->_internal_score() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<3>(
            stream, this->_internal_score(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Player)
  return target;
}

::size_t Player::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Player)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string user_id = 1;
  if (!this->_internal_user_id().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_user_id());
  }

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_nickname());
  }

  // int32 score = 3;
  if (this->_internal_score() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_score());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Player::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Player*>(&to_msg);
  auto& from = static_cast<const Player&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Player)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_user_id().empty()) {
    _this->_internal_set_user_id(from._internal_user_id());
  }
  if (!from._internal_nickname().empty()) {
    _this->_internal_set_nickname(from._internal_nickname());
  }
  if (from._internal_score() != 0) {
    _this->_impl_.score_ = from._impl_.score_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Player::CopyFrom(const Player& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Player::InternalSwap(Player* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.user_id_, &other->_impl_.user_id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.nickname_, &other->_impl_.nickname_, arena);
        swap(_impl_.score_, other->_impl_.score_);
}

::google::protobuf::Metadata Player::GetMetadata() const {
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
        (::_pbi::AddDescriptors(&descriptor_table_GameRoom_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
