#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
struct FileAttributes;
}
namespace System {
struct DateTime;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::IO {
struct FileStatus;
}
// Forward declare root types
namespace System::IO {
class FileSystemInfo;
}
// Type: System.IO::FileSystemInfo
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3582))
// CS Name: System.IO.FileSystemInfo
class CORDL_TYPE FileSystemInfo : public ::System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~FileSystemInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: " const&", def_value: None }]
constexpr FileSystemInfo(FileSystemInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemInfo", modifiers: "&&", def_value: None }]
constexpr FileSystemInfo(FileSystemInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemInfo(void* ptr) noexcept : ::System::MarshalByRefObject(ptr) {
}


  constexpr FileSystemInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemInfo& operator=(FileSystemInfo&& o) noexcept = default;
  constexpr FileSystemInfo& operator=(FileSystemInfo const& o) noexcept = default;
                


// Fields

 ::System::IO::FileStatus __declspec(property(get=__get__fileStatus, put=__set__fileStatus))  _fileStatus;

constexpr void __set__fileStatus(::System::IO::FileStatus value) ;

constexpr ::System::IO::FileStatus __get__fileStatus() const;

 ::StringW __declspec(property(get=__get_FullPath, put=__set_FullPath))  FullPath;

constexpr void __set_FullPath(::StringW value) ;

constexpr ::StringW __get_FullPath() const;

 ::StringW __declspec(property(get=__get_OriginalPath, put=__set_OriginalPath))  OriginalPath;

constexpr void __set_OriginalPath(::StringW value) ;

constexpr ::StringW __get_OriginalPath() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;


// Properties

 ::System::IO::FileAttributes __declspec(property(get=get_Attributes))  Attributes;

 bool __declspec(property(get=get_ExistsCore))  ExistsCore;

 ::System::DateTimeOffset __declspec(property(get=get_LastWriteTimeCore))  LastWriteTimeCore;

 int64_t __declspec(property(get=get_LengthCore))  LengthCore;

 ::StringW __declspec(property(get=get_NormalizedPath))  NormalizedPath;

 ::StringW __declspec(property(get=get_FullName))  FullName;

 ::StringW __declspec(property(get=get_Name))  Name;

 bool __declspec(property(get=get_Exists))  Exists;

 ::System::DateTime __declspec(property(get=get_LastWriteTime))  LastWriteTime;

 ::System::DateTime __declspec(property(get=get_LastWriteTimeUtc))  LastWriteTimeUtc;


// Methods

// Ctor Parameters []
explicit FileSystemInfo() ;

/// @brief Method .ctor addr 0x239b278 size 0x74 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x239fab0 size 0xdc virtual false final false
static ::System::IO::FileSystemInfo Create(::StringW fullPath, ::StringW fileName, ByRef<::System::IO::FileStatus> fileStatus) ;

/// @brief Method Init addr 0x239fb8c size 0x7c virtual false final false
 void Init(ByRef<::System::IO::FileStatus> fileStatus) ;

/// @brief Method get_Attributes addr 0x239e230 size 0xd0 virtual false final false
 ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_ExistsCore addr 0x239fc08 size 0x98 virtual false final false
 bool get_ExistsCore() ;

/// @brief Method get_LastWriteTimeCore addr 0x239fca0 size 0x6c virtual false final false
 ::System::DateTimeOffset get_LastWriteTimeCore() ;

/// @brief Method get_LengthCore addr 0x239e300 size 0x80 virtual false final false
 int64_t get_LengthCore() ;

/// @brief Method Refresh addr 0x239fd0c size 0x68 virtual false final false
 void Refresh() ;

/// @brief Method ThrowNotFound addr 0x239fa1c size 0x94 virtual false final false
static void ThrowNotFound(::StringW path) ;

/// @brief Method get_NormalizedPath addr 0x239fd74 size 0x8 virtual false final false
 ::StringW get_NormalizedPath() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FileSystemInfo(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x239b958 size 0x144 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x239fd7c size 0x148 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_FullName addr 0x239fec4 size 0x8 virtual true final false
 ::StringW get_FullName() ;

/// @brief Method get_Name addr 0x239fecc size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_Exists addr 0x239fed4 size 0x88 virtual true final false
 bool get_Exists() ;

/// @brief Method Delete addr 0x0 size 0xffffffffffffffff virtual true final false
 void Delete() ;

/// @brief Method get_LastWriteTime addr 0x239ff5c size 0x38 virtual false final false
 ::System::DateTime get_LastWriteTime() ;

/// @brief Method get_LastWriteTimeUtc addr 0x239ff94 size 0x28 virtual false final false
 ::System::DateTime get_LastWriteTimeUtc() ;

/// @brief Method ToString addr 0x239ffbc size 0x54 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::FileSystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystemInfo, "System.IO", "FileSystemInfo");
