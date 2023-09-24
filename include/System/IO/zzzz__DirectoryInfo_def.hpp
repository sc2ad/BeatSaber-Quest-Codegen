#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__FileSystemInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::IO {
struct SearchTarget;
}
namespace System::IO {
class EnumerationOptions;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class FileSystemInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::IO {
class DirectoryInfo;
}
// Type: System.IO::DirectoryInfo
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3576))
// CS Name: System.IO.DirectoryInfo
class CORDL_TYPE DirectoryInfo : public System::IO::FileSystemInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~DirectoryInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: " const&", def_value: None }]
constexpr DirectoryInfo(DirectoryInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectoryInfo", modifiers: "&&", def_value: None }]
constexpr DirectoryInfo(DirectoryInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectoryInfo(void* ptr) noexcept : System::IO::FileSystemInfo(ptr) {
}


  constexpr DirectoryInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectoryInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectoryInfo& operator=(DirectoryInfo&& o) noexcept = default;
  constexpr DirectoryInfo& operator=(DirectoryInfo const& o) noexcept = default;
                


// Methods

static System::IO::DirectoryInfo New_ctor(::StringW path) ;

/// @brief Method .ctor addr 0x239a090 size 0x84 virtual false final false
 void _ctor(::StringW path) ;

static System::IO::DirectoryInfo New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) ;

/// @brief Method .ctor addr 0x239a844 size 0x48 virtual false final false
 void _ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) ;

/// @brief Method Init addr 0x239b2ec size 0x290 virtual false final false
 void Init(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) ;

/// @brief Method GetDirectories addr 0x239b57c size 0xa8 virtual false final false
 ::ArrayW<System::IO::DirectoryInfo> GetDirectories() ;

/// @brief Method GetDirectories addr 0x239b624 size 0xa0 virtual false final false
 ::ArrayW<System::IO::DirectoryInfo> GetDirectories(::StringW searchPattern, System::IO::EnumerationOptions enumerationOptions) ;

/// @brief Method InternalEnumerateInfos addr 0x239b6c4 size 0x1c0 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::IO::FileSystemInfo> InternalEnumerateInfos(::StringW path, ::StringW searchPattern, System::IO::SearchTarget searchTarget, System::IO::EnumerationOptions options) ;

/// @brief Method Delete addr 0x239b884 size 0xc virtual true final false
 void Delete() ;

static System::IO::DirectoryInfo New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x239b954 size 0x4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::DirectoryInfo);
DEFINE_IL2CPP_ARG_TYPE(System::IO::DirectoryInfo, "System.IO", "DirectoryInfo");
