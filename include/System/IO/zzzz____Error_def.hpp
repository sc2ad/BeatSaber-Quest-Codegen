#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::IO {
class __Error;
}
// Type: System.IO::__Error
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3605))
// CS Name: System.IO.__Error
class CORDL_TYPE __Error : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~__Error() = default;

// Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: " const&", def_value: None }]
constexpr __Error(__Error const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "__Error", modifiers: "&&", def_value: None }]
constexpr __Error(__Error&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit __Error(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr __Error& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr __Error& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr __Error& operator=(__Error&& o) noexcept = default;
  constexpr __Error& operator=(__Error const& o) noexcept = default;
                


// Methods

/// @brief Method EndOfFile addr 0x23c7e78 size 0x60 virtual false final false
static void EndOfFile() ;

/// @brief Method FileNotOpen addr 0x23c7ed8 size 0x64 virtual false final false
static void FileNotOpen() ;

/// @brief Method ReaderClosed addr 0x23c7f3c size 0x64 virtual false final false
static void ReaderClosed() ;

/// @brief Method GetDisplayablePath addr 0x23c7fa0 size 0x144 virtual false final false
static ::StringW GetDisplayablePath(::StringW path, bool isInvalidPath) ;

/// @brief Method WinIOError addr 0x23c8280 size 0x5a0 virtual false final false
static void WinIOError(int32_t errorCode, ::StringW maybeFullPath) ;

/// @brief Method WriterClosed addr 0x23c8820 size 0x64 virtual false final false
static void WriterClosed() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::__Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Error, "System.IO", "__Error");
