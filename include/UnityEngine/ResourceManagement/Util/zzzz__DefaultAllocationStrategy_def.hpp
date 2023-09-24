#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DefaultAllocationStrategy;
}
// Type: UnityEngine.ResourceManagement.Util::DefaultAllocationStrategy
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14259))
// CS Name: UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
class CORDL_TYPE DefaultAllocationStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IAllocationStrategy
constexpr operator  UnityEngine::ResourceManagement::Util::IAllocationStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultAllocationStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: " const&", def_value: None }]
constexpr DefaultAllocationStrategy(DefaultAllocationStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: "&&", def_value: None }]
constexpr DefaultAllocationStrategy(DefaultAllocationStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultAllocationStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultAllocationStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultAllocationStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultAllocationStrategy& operator=(DefaultAllocationStrategy&& o) noexcept = default;
  constexpr DefaultAllocationStrategy& operator=(DefaultAllocationStrategy const& o) noexcept = default;
                


// Methods

/// @brief Method New addr 0x2a3a698 size 0xc virtual true final true
 ::bs_hook::Il2CppWrapperType New(System::Type type, int32_t typeHash) ;

/// @brief Method Release addr 0x2a3a6a4 size 0x4 virtual true final true
 void Release(int32_t typeHash, ::bs_hook::Il2CppWrapperType obj) ;

static UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy New_ctor() ;

/// @brief Method .ctor addr 0x2a3a6a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy, "UnityEngine.ResourceManagement.Util", "DefaultAllocationStrategy");
