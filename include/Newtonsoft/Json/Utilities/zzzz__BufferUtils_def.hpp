#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class BufferUtils;
}
// Type: Newtonsoft.Json.Utilities::BufferUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11830))
// CS Name: Newtonsoft.Json.Utilities.BufferUtils
class CORDL_TYPE BufferUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BufferUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferUtils", modifiers: " const&", def_value: None }]
constexpr BufferUtils(BufferUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferUtils", modifiers: "&&", def_value: None }]
constexpr BufferUtils(BufferUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferUtils& operator=(BufferUtils&& o) noexcept = default;
  constexpr BufferUtils& operator=(BufferUtils const& o) noexcept = default;
                


// Methods

/// @brief Method RentBuffer addr 0x24ea87c size 0xc8 virtual false final false
static ::ArrayW<char16_t> RentBuffer(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t minSize) ;

/// @brief Method ReturnBuffer addr 0x24ea944 size 0xb0 virtual false final false
static void ReturnBuffer(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, ::ArrayW<char16_t> buffer) ;

/// @brief Method EnsureBufferSize addr 0x24ea9f4 size 0x13c virtual false final false
static ::ArrayW<char16_t> EnsureBufferSize(Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, int32_t size, ::ArrayW<char16_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::BufferUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::BufferUtils, "Newtonsoft.Json.Utilities", "BufferUtils");
