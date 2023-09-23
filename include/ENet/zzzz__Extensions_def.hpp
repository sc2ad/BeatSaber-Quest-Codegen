#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace ENet {
class Extensions;
}
// Type: ENet::Extensions
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15275))
// CS Name: ENet.Extensions
class CORDL_TYPE Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: " const&", def_value: None }]
constexpr Extensions(Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
constexpr Extensions(Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Extensions& operator=(Extensions&& o) noexcept = default;
  constexpr Extensions& operator=(Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method StringLength addr 0x2080230 size 0x9c virtual false final false
static int32_t StringLength(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::Extensions);
DEFINE_IL2CPP_ARG_TYPE(ENet::Extensions, "ENet", "Extensions");
