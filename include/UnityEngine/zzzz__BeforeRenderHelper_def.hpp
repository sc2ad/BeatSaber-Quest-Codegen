#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Events {
class UnityAction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct UnityEngine__BeforeRenderHelper__OrderBlock;
}
// Forward declare root types
namespace UnityEngine {
class BeforeRenderHelper;
}
namespace UnityEngine {
struct UnityEngine__BeforeRenderHelper__OrderBlock;
}
// Type: ::OrderBlock
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10041))
// CS Name: UnityEngine.BeforeRenderHelper::OrderBlock
struct CORDL_TYPE UnityEngine__BeforeRenderHelper__OrderBlock : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "callback", ty: "UnityEngine::Events::UnityAction", modifiers: "", def_value: None }]
constexpr UnityEngine__BeforeRenderHelper__OrderBlock(int32_t order, UnityEngine::Events::UnityAction callback) noexcept;


                    constexpr UnityEngine__BeforeRenderHelper__OrderBlock(UnityEngine__BeforeRenderHelper__OrderBlock const&) = default;
                    constexpr UnityEngine__BeforeRenderHelper__OrderBlock(UnityEngine__BeforeRenderHelper__OrderBlock&&) = default;
                    constexpr UnityEngine__BeforeRenderHelper__OrderBlock& operator=(UnityEngine__BeforeRenderHelper__OrderBlock const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__BeforeRenderHelper__OrderBlock& operator=(UnityEngine__BeforeRenderHelper__OrderBlock&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__BeforeRenderHelper__OrderBlock(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 UnityEngine::Events::UnityAction __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(UnityEngine::Events::UnityAction value) ;

constexpr UnityEngine::Events::UnityAction __get_callback() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::BeforeRenderHelper
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10042))
// CS Name: UnityEngine.BeforeRenderHelper
class CORDL_TYPE BeforeRenderHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OrderBlock = UnityEngine::UnityEngine__BeforeRenderHelper__OrderBlock;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeforeRenderHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: " const&", def_value: None }]
constexpr BeforeRenderHelper(BeforeRenderHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeforeRenderHelper", modifiers: "&&", def_value: None }]
constexpr BeforeRenderHelper(BeforeRenderHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeforeRenderHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeforeRenderHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeforeRenderHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeforeRenderHelper& operator=(BeforeRenderHelper&& o) noexcept = default;
  constexpr BeforeRenderHelper& operator=(BeforeRenderHelper const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::UnityEngine__BeforeRenderHelper__OrderBlock> __declspec(property(get=__get_s_OrderBlocks, put=__set_s_OrderBlocks))  s_OrderBlocks;

static void __set_s_OrderBlocks(System::Collections::Generic::List_1<UnityEngine::UnityEngine__BeforeRenderHelper__OrderBlock> value) ;

static System::Collections::Generic::List_1<UnityEngine::UnityEngine__BeforeRenderHelper__OrderBlock> __get_s_OrderBlocks() ;


// Methods

/// @brief Method GetUpdateOrder addr 0x2b4b554 size 0x118 virtual false final false
static int32_t GetUpdateOrder(UnityEngine::Events::UnityAction callback) ;

/// @brief Method RegisterCallback addr 0x2b4b66c size 0x348 virtual false final false
static void RegisterCallback(UnityEngine::Events::UnityAction callback) ;

/// @brief Method UnregisterCallback addr 0x2b4b9b4 size 0x310 virtual false final false
static void UnregisterCallback(UnityEngine::Events::UnityAction callback) ;

/// @brief Method Invoke addr 0x2b4bcc4 size 0x19c virtual false final false
static void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::BeforeRenderHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BeforeRenderHelper, "UnityEngine", "BeforeRenderHelper");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__BeforeRenderHelper__OrderBlock, "UnityEngine", "BeforeRenderHelper/OrderBlock");
