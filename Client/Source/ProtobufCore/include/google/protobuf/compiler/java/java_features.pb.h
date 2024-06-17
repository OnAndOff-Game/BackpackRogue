// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/compiler/java/java_features.proto
// Protobuf C++ Version: 5.27.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_2epb_2eh

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
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto PROTOC_EXPORT

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct PROTOC_EXPORT TableStruct_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto {
  static const ::uint32_t offsets[];
};
PROTOC_EXPORT extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto;
namespace pb {
class JavaFeatures;
struct JavaFeaturesDefaultTypeInternal;
PROTOC_EXPORT extern JavaFeaturesDefaultTypeInternal _JavaFeatures_default_instance_;
}  // namespace pb
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace pb {
enum JavaFeatures_Utf8Validation : int {
  JavaFeatures_Utf8Validation_UTF8_VALIDATION_UNKNOWN = 0,
  JavaFeatures_Utf8Validation_DEFAULT = 1,
  JavaFeatures_Utf8Validation_VERIFY = 2,
};

PROTOC_EXPORT bool JavaFeatures_Utf8Validation_IsValid(int value);
PROTOC_EXPORT extern const uint32_t JavaFeatures_Utf8Validation_internal_data_[];
constexpr JavaFeatures_Utf8Validation JavaFeatures_Utf8Validation_Utf8Validation_MIN = static_cast<JavaFeatures_Utf8Validation>(0);
constexpr JavaFeatures_Utf8Validation JavaFeatures_Utf8Validation_Utf8Validation_MAX = static_cast<JavaFeatures_Utf8Validation>(2);
constexpr int JavaFeatures_Utf8Validation_Utf8Validation_ARRAYSIZE = 2 + 1;
PROTOC_EXPORT const ::google::protobuf::EnumDescriptor*
JavaFeatures_Utf8Validation_descriptor();
template <typename T>
const std::string& JavaFeatures_Utf8Validation_Name(T value) {
  static_assert(std::is_same<T, JavaFeatures_Utf8Validation>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to Utf8Validation_Name().");
  return JavaFeatures_Utf8Validation_Name(static_cast<JavaFeatures_Utf8Validation>(value));
}
template <>
inline const std::string& JavaFeatures_Utf8Validation_Name(JavaFeatures_Utf8Validation value) {
  return ::google::protobuf::internal::NameOfDenseEnum<JavaFeatures_Utf8Validation_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool JavaFeatures_Utf8Validation_Parse(absl::string_view name, JavaFeatures_Utf8Validation* value) {
  return ::google::protobuf::internal::ParseNamedEnum<JavaFeatures_Utf8Validation>(
      JavaFeatures_Utf8Validation_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class PROTOC_EXPORT JavaFeatures final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:pb.JavaFeatures) */ {
 public:
  inline JavaFeatures() : JavaFeatures(nullptr) {}
  ~JavaFeatures() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR JavaFeatures(
      ::google::protobuf::internal::ConstantInitialized);

  inline JavaFeatures(const JavaFeatures& from) : JavaFeatures(nullptr, from) {}
  inline JavaFeatures(JavaFeatures&& from) noexcept
      : JavaFeatures(nullptr, std::move(from)) {}
  inline JavaFeatures& operator=(const JavaFeatures& from) {
    CopyFrom(from);
    return *this;
  }
  inline JavaFeatures& operator=(JavaFeatures&& from) noexcept {
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
  static const JavaFeatures& default_instance() {
    return *internal_default_instance();
  }
  static inline const JavaFeatures* internal_default_instance() {
    return reinterpret_cast<const JavaFeatures*>(
        &_JavaFeatures_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(JavaFeatures& a, JavaFeatures& b) { a.Swap(&b); }
  inline void Swap(JavaFeatures* other) {
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
  void UnsafeArenaSwap(JavaFeatures* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  JavaFeatures* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<JavaFeatures>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const JavaFeatures& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const JavaFeatures& from) { JavaFeatures::MergeImpl(*this, from); }

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
  void InternalSwap(JavaFeatures* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "pb.JavaFeatures"; }

 protected:
  explicit JavaFeatures(::google::protobuf::Arena* arena);
  JavaFeatures(::google::protobuf::Arena* arena, const JavaFeatures& from);
  JavaFeatures(::google::protobuf::Arena* arena, JavaFeatures&& from) noexcept
      : JavaFeatures(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------
  using Utf8Validation = JavaFeatures_Utf8Validation;
  static constexpr Utf8Validation UTF8_VALIDATION_UNKNOWN = JavaFeatures_Utf8Validation_UTF8_VALIDATION_UNKNOWN;
  static constexpr Utf8Validation DEFAULT = JavaFeatures_Utf8Validation_DEFAULT;
  static constexpr Utf8Validation VERIFY = JavaFeatures_Utf8Validation_VERIFY;
  static inline bool Utf8Validation_IsValid(int value) {
    return JavaFeatures_Utf8Validation_IsValid(value);
  }
  static constexpr Utf8Validation Utf8Validation_MIN = JavaFeatures_Utf8Validation_Utf8Validation_MIN;
  static constexpr Utf8Validation Utf8Validation_MAX = JavaFeatures_Utf8Validation_Utf8Validation_MAX;
  static constexpr int Utf8Validation_ARRAYSIZE = JavaFeatures_Utf8Validation_Utf8Validation_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor* Utf8Validation_descriptor() {
    return JavaFeatures_Utf8Validation_descriptor();
  }
  template <typename T>
  static inline const std::string& Utf8Validation_Name(T value) {
    return JavaFeatures_Utf8Validation_Name(value);
  }
  static inline bool Utf8Validation_Parse(absl::string_view name, Utf8Validation* value) {
    return JavaFeatures_Utf8Validation_Parse(name, value);
  }

  // accessors -------------------------------------------------------
  enum : int {
    kLegacyClosedEnumFieldNumber = 1,
    kUtf8ValidationFieldNumber = 2,
  };
  // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  bool has_legacy_closed_enum() const;
  void clear_legacy_closed_enum() ;
  bool legacy_closed_enum() const;
  void set_legacy_closed_enum(bool value);

  private:
  bool _internal_legacy_closed_enum() const;
  void _internal_set_legacy_closed_enum(bool value);

  public:
  // optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  bool has_utf8_validation() const;
  void clear_utf8_validation() ;
  ::pb::JavaFeatures_Utf8Validation utf8_validation() const;
  void set_utf8_validation(::pb::JavaFeatures_Utf8Validation value);

  private:
  ::pb::JavaFeatures_Utf8Validation _internal_utf8_validation() const;
  void _internal_set_utf8_validation(::pb::JavaFeatures_Utf8Validation value);

  public:
  // @@protoc_insertion_point(class_scope:pb.JavaFeatures)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_JavaFeatures_default_instance_;

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
                          const JavaFeatures& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    bool legacy_closed_enum_;
    int utf8_validation_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto;
};

// ===================================================================



static const int kJavaFieldNumber = 1001;
PROTOC_EXPORT extern ::google::protobuf::internal::ExtensionIdentifier<
    ::google::protobuf::FeatureSet, ::google::protobuf::internal::MessageTypeTraits< ::pb::JavaFeatures >, 11,
    false>
    java;

// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// JavaFeatures

// optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
inline bool JavaFeatures::has_legacy_closed_enum() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void JavaFeatures::clear_legacy_closed_enum() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.legacy_closed_enum_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool JavaFeatures::legacy_closed_enum() const {
  // @@protoc_insertion_point(field_get:pb.JavaFeatures.legacy_closed_enum)
  return _internal_legacy_closed_enum();
}
inline void JavaFeatures::set_legacy_closed_enum(bool value) {
  _internal_set_legacy_closed_enum(value);
  _impl_._has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_set:pb.JavaFeatures.legacy_closed_enum)
}
inline bool JavaFeatures::_internal_legacy_closed_enum() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.legacy_closed_enum_;
}
inline void JavaFeatures::_internal_set_legacy_closed_enum(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.legacy_closed_enum_ = value;
}

// optional .pb.JavaFeatures.Utf8Validation utf8_validation = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
inline bool JavaFeatures::has_utf8_validation() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void JavaFeatures::clear_utf8_validation() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.utf8_validation_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::pb::JavaFeatures_Utf8Validation JavaFeatures::utf8_validation() const {
  // @@protoc_insertion_point(field_get:pb.JavaFeatures.utf8_validation)
  return _internal_utf8_validation();
}
inline void JavaFeatures::set_utf8_validation(::pb::JavaFeatures_Utf8Validation value) {
  _internal_set_utf8_validation(value);
  _impl_._has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_set:pb.JavaFeatures.utf8_validation)
}
inline ::pb::JavaFeatures_Utf8Validation JavaFeatures::_internal_utf8_validation() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::pb::JavaFeatures_Utf8Validation>(_impl_.utf8_validation_);
}
inline void JavaFeatures::_internal_set_utf8_validation(::pb::JavaFeatures_Utf8Validation value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  assert(::pb::JavaFeatures_Utf8Validation_IsValid(value));
  _impl_.utf8_validation_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::pb::JavaFeatures_Utf8Validation> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::pb::JavaFeatures_Utf8Validation>() {
  return ::pb::JavaFeatures_Utf8Validation_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcompiler_2fjava_2fjava_5ffeatures_2eproto_2epb_2eh
