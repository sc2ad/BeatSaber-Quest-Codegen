#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono {
struct SafeStringMarshal;
}
namespace Mono {
struct MonoAssemblyName;
}
// Forward declare root types
namespace Mono {
class RuntimeMarshal;
}
// Type: Mono::RuntimeMarshal
namespace Mono {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2234))
// CS Name: Mono.RuntimeMarshal
class CORDL_TYPE RuntimeMarshal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RuntimeMarshal() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMarshal", modifiers: " const&", def_value: None }]
constexpr RuntimeMarshal(RuntimeMarshal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMarshal", modifiers: "&&", def_value: None }]
constexpr RuntimeMarshal(RuntimeMarshal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeMarshal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RuntimeMarshal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeMarshal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeMarshal& operator=(RuntimeMarshal&& o) noexcept = default;
  constexpr RuntimeMarshal& operator=(RuntimeMarshal const& o) noexcept = default;
                


// Methods

/// @brief Method PtrToUtf8String addr 0x22a5510 size 0xe4 virtual false final false
static ::StringW PtrToUtf8String(::cordl_internals::intptr_t ptr) ;

/// @brief Method MarshalString addr 0x22a55f4 size 0x50 virtual false final false
static Mono::SafeStringMarshal MarshalString(::StringW str) ;

/// @brief Method DecodeBlobSize addr 0x22a56a4 size 0x80 virtual false final false
static int32_t DecodeBlobSize(::cordl_internals::intptr_t in_ptr, ByRef<::cordl_internals::intptr_t> out_ptr) ;

/// @brief Method DecodeBlobArray addr 0x22a5724 size 0xb8 virtual false final false
static ::ArrayW<uint8_t> DecodeBlobArray(::cordl_internals::intptr_t ptr) ;

/// @brief Method AsciHexDigitValue addr 0x22a57dc size 0x2c virtual false final false
static int32_t AsciHexDigitValue(int32_t c) ;

/// @brief Method FreeAssemblyName addr 0x22a5808 size 0x8 virtual false final false
static void FreeAssemblyName(ByRef<Mono::MonoAssemblyName> name, bool freeStruct) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono
NEED_NO_BOX(Mono::RuntimeMarshal);
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeMarshal, "Mono", "RuntimeMarshal");
