#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
class RpcPool;
}
// Type: ::RpcPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12893))
// CS Name: RpcPool
class CORDL_TYPE RpcPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RpcPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: " const&", def_value: None }]
constexpr RpcPool(RpcPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: "&&", def_value: None }]
constexpr RpcPool(RpcPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RpcPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RpcPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RpcPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RpcPool& operator=(RpcPool&& o) noexcept = default;
  constexpr RpcPool& operator=(RpcPool const& o) noexcept = default;
                


// Methods

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Obtain() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Fill() ;

/// @brief Method Release addr 0xdc7384 size 0xfc virtual false final false
static void Release(GlobalNamespace::IRemoteProcedureCall t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RpcPool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RpcPool, "", "RpcPool");
