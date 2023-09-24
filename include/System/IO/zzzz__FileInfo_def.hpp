#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileInfo;
}
// Type: System.IO::FileInfo
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3579))
// CS Name: System.IO.FileInfo
class CORDL_TYPE FileInfo : public System::IO::FileSystemInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~FileInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: " const&", def_value: None }]
constexpr FileInfo(FileInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileInfo", modifiers: "&&", def_value: None }]
constexpr FileInfo(FileInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileInfo(void* ptr) noexcept : System::IO::FileSystemInfo(ptr) {
}


  constexpr FileInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileInfo& operator=(FileInfo&& o) noexcept = default;
  constexpr FileInfo& operator=(FileInfo const& o) noexcept = default;
                


// Properties

 int64_t __declspec(property(get=get_Length))  Length;

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

static System::IO::FileInfo New_ctor() ;

/// @brief Method .ctor addr 0x239e06c size 0x4 virtual false final false
 void _ctor() ;

static System::IO::FileInfo New_ctor(::StringW fileName) ;

/// @brief Method .ctor addr 0x239e070 size 0x10 virtual false final false
 void _ctor(::StringW fileName) ;

static System::IO::FileInfo New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) ;

/// @brief Method .ctor addr 0x239e080 size 0x128 virtual false final false
 void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) ;

/// @brief Method get_Length addr 0x239e1a8 size 0x88 virtual false final false
 int64_t get_Length() ;

/// @brief Method CreateText addr 0x239e380 size 0x68 virtual false final false
 System::IO::StreamWriter CreateText() ;

/// @brief Method AppendText addr 0x239e3e8 size 0x68 virtual false final false
 System::IO::StreamWriter AppendText() ;

/// @brief Method Delete addr 0x239e450 size 0x8 virtual true final false
 void Delete() ;

/// @brief Method OpenRead addr 0x239e458 size 0x7c virtual false final false
 System::IO::FileStream OpenRead() ;

static System::IO::FileInfo New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x239e4d4 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Name addr 0x239e4d8 size 0x8 virtual true final false
 ::StringW get_Name() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::FileInfo);
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileInfo, "System.IO", "FileInfo");
