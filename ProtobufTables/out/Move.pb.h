// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Move.proto
// Protobuf C++ Version: 5.27.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_Move_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Move_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Move_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Move_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Move_2eproto;
class MoveRequest;
struct MoveRequestDefaultTypeInternal;
extern MoveRequestDefaultTypeInternal _MoveRequest_default_instance_;
class MoveResponse;
struct MoveResponseDefaultTypeInternal;
extern MoveResponseDefaultTypeInternal _MoveResponse_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class MoveResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:MoveResponse) */ {
 public:
  inline MoveResponse() : MoveResponse(nullptr) {}
  ~MoveResponse() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR MoveResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline MoveResponse(const MoveResponse& from) : MoveResponse(nullptr, from) {}
  inline MoveResponse(MoveResponse&& from) noexcept
      : MoveResponse(nullptr, std::move(from)) {}
  inline MoveResponse& operator=(const MoveResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline MoveResponse& operator=(MoveResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MoveResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const MoveResponse* internal_default_instance() {
    return reinterpret_cast<const MoveResponse*>(
        &_MoveResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(MoveResponse& a, MoveResponse& b) { a.Swap(&b); }
  inline void Swap(MoveResponse* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MoveResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MoveResponse* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<MoveResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const MoveResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const MoveResponse& from) { MoveResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(MoveResponse* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "MoveResponse"; }

 protected:
  explicit MoveResponse(::google::protobuf::Arena* arena);
  MoveResponse(::google::protobuf::Arena* arena, const MoveResponse& from);
  MoveResponse(::google::protobuf::Arena* arena, MoveResponse&& from) noexcept
      : MoveResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kErrorMessageFieldNumber = 2,
    kSuccessFieldNumber = 1,
  };
  // string error_message = 2;
  void clear_error_message() ;
  const std::string& error_message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_error_message(Arg_&& arg, Args_... args);
  std::string* mutable_error_message();
  PROTOBUF_NODISCARD std::string* release_error_message();
  void set_allocated_error_message(std::string* value);

  private:
  const std::string& _internal_error_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error_message(
      const std::string& value);
  std::string* _internal_mutable_error_message();

  public:
  // bool success = 1;
  void clear_success() ;
  bool success() const;
  void set_success(bool value);

  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);

  public:
  // @@protoc_insertion_point(class_scope:MoveResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      34, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_MoveResponse_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const MoveResponse& from_msg);
    ::google::protobuf::internal::ArenaStringPtr error_message_;
    bool success_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Move_2eproto;
};
// -------------------------------------------------------------------

class MoveRequest final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:MoveRequest) */ {
 public:
  inline MoveRequest() : MoveRequest(nullptr) {}
  ~MoveRequest() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR MoveRequest(
      ::google::protobuf::internal::ConstantInitialized);

  inline MoveRequest(const MoveRequest& from) : MoveRequest(nullptr, from) {}
  inline MoveRequest(MoveRequest&& from) noexcept
      : MoveRequest(nullptr, std::move(from)) {}
  inline MoveRequest& operator=(const MoveRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline MoveRequest& operator=(MoveRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MoveRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const MoveRequest* internal_default_instance() {
    return reinterpret_cast<const MoveRequest*>(
        &_MoveRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(MoveRequest& a, MoveRequest& b) { a.Swap(&b); }
  inline void Swap(MoveRequest* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MoveRequest* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MoveRequest* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<MoveRequest>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const MoveRequest& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const MoveRequest& from) { MoveRequest::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(MoveRequest* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "MoveRequest"; }

 protected:
  explicit MoveRequest(::google::protobuf::Arena* arena);
  MoveRequest(::google::protobuf::Arena* arena, const MoveRequest& from);
  MoveRequest(::google::protobuf::Arena* arena, MoveRequest&& from) noexcept
      : MoveRequest(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kPlayerIdFieldNumber = 1,
    kXFieldNumber = 2,
    kYFieldNumber = 3,
    kZFieldNumber = 4,
    kRotationFieldNumber = 5,
  };
  // string player_id = 1;
  void clear_player_id() ;
  const std::string& player_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_player_id(Arg_&& arg, Args_... args);
  std::string* mutable_player_id();
  PROTOBUF_NODISCARD std::string* release_player_id();
  void set_allocated_player_id(std::string* value);

  private:
  const std::string& _internal_player_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_player_id(
      const std::string& value);
  std::string* _internal_mutable_player_id();

  public:
  // float x = 2;
  void clear_x() ;
  float x() const;
  void set_x(float value);

  private:
  float _internal_x() const;
  void _internal_set_x(float value);

  public:
  // float y = 3;
  void clear_y() ;
  float y() const;
  void set_y(float value);

  private:
  float _internal_y() const;
  void _internal_set_y(float value);

  public:
  // float z = 4;
  void clear_z() ;
  float z() const;
  void set_z(float value);

  private:
  float _internal_z() const;
  void _internal_set_z(float value);

  public:
  // float rotation = 5;
  void clear_rotation() ;
  float rotation() const;
  void set_rotation(float value);

  private:
  float _internal_rotation() const;
  void _internal_set_rotation(float value);

  public:
  // @@protoc_insertion_point(class_scope:MoveRequest)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      29, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_MoveRequest_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const MoveRequest& from_msg);
    ::google::protobuf::internal::ArenaStringPtr player_id_;
    float x_;
    float y_;
    float z_;
    float rotation_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Move_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MoveRequest

// string player_id = 1;
inline void MoveRequest::clear_player_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.player_id_.ClearToEmpty();
}
inline const std::string& MoveRequest::player_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:MoveRequest.player_id)
  return _internal_player_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MoveRequest::set_player_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.player_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:MoveRequest.player_id)
}
inline std::string* MoveRequest::mutable_player_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_player_id();
  // @@protoc_insertion_point(field_mutable:MoveRequest.player_id)
  return _s;
}
inline const std::string& MoveRequest::_internal_player_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.player_id_.Get();
}
inline void MoveRequest::_internal_set_player_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.player_id_.Set(value, GetArena());
}
inline std::string* MoveRequest::_internal_mutable_player_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.player_id_.Mutable( GetArena());
}
inline std::string* MoveRequest::release_player_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:MoveRequest.player_id)
  return _impl_.player_id_.Release();
}
inline void MoveRequest::set_allocated_player_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.player_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.player_id_.IsDefault()) {
          _impl_.player_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:MoveRequest.player_id)
}

// float x = 2;
inline void MoveRequest::clear_x() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = 0;
}
inline float MoveRequest::x() const {
  // @@protoc_insertion_point(field_get:MoveRequest.x)
  return _internal_x();
}
inline void MoveRequest::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:MoveRequest.x)
}
inline float MoveRequest::_internal_x() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.x_;
}
inline void MoveRequest::_internal_set_x(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.x_ = value;
}

// float y = 3;
inline void MoveRequest::clear_y() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = 0;
}
inline float MoveRequest::y() const {
  // @@protoc_insertion_point(field_get:MoveRequest.y)
  return _internal_y();
}
inline void MoveRequest::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:MoveRequest.y)
}
inline float MoveRequest::_internal_y() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.y_;
}
inline void MoveRequest::_internal_set_y(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.y_ = value;
}

// float z = 4;
inline void MoveRequest::clear_z() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.z_ = 0;
}
inline float MoveRequest::z() const {
  // @@protoc_insertion_point(field_get:MoveRequest.z)
  return _internal_z();
}
inline void MoveRequest::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:MoveRequest.z)
}
inline float MoveRequest::_internal_z() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.z_;
}
inline void MoveRequest::_internal_set_z(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.z_ = value;
}

// float rotation = 5;
inline void MoveRequest::clear_rotation() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.rotation_ = 0;
}
inline float MoveRequest::rotation() const {
  // @@protoc_insertion_point(field_get:MoveRequest.rotation)
  return _internal_rotation();
}
inline void MoveRequest::set_rotation(float value) {
  _internal_set_rotation(value);
  // @@protoc_insertion_point(field_set:MoveRequest.rotation)
}
inline float MoveRequest::_internal_rotation() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.rotation_;
}
inline void MoveRequest::_internal_set_rotation(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.rotation_ = value;
}

// -------------------------------------------------------------------

// MoveResponse

// bool success = 1;
inline void MoveResponse::clear_success() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.success_ = false;
}
inline bool MoveResponse::success() const {
  // @@protoc_insertion_point(field_get:MoveResponse.success)
  return _internal_success();
}
inline void MoveResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:MoveResponse.success)
}
inline bool MoveResponse::_internal_success() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.success_;
}
inline void MoveResponse::_internal_set_success(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.success_ = value;
}

// string error_message = 2;
inline void MoveResponse::clear_error_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.error_message_.ClearToEmpty();
}
inline const std::string& MoveResponse::error_message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:MoveResponse.error_message)
  return _internal_error_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void MoveResponse::set_error_message(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.error_message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:MoveResponse.error_message)
}
inline std::string* MoveResponse::mutable_error_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_error_message();
  // @@protoc_insertion_point(field_mutable:MoveResponse.error_message)
  return _s;
}
inline const std::string& MoveResponse::_internal_error_message() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.error_message_.Get();
}
inline void MoveResponse::_internal_set_error_message(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.error_message_.Set(value, GetArena());
}
inline std::string* MoveResponse::_internal_mutable_error_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.error_message_.Mutable( GetArena());
}
inline std::string* MoveResponse::release_error_message() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:MoveResponse.error_message)
  return _impl_.error_message_.Release();
}
inline void MoveResponse::set_allocated_error_message(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.error_message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.error_message_.IsDefault()) {
          _impl_.error_message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:MoveResponse.error_message)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Move_2eproto_2epb_2eh