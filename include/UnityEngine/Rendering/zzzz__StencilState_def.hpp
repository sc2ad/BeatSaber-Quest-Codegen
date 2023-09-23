#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct StencilState;
}
// Type: UnityEngine.Rendering::StencilState
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10295))
// CS Name: UnityEngine.Rendering.StencilState
struct CORDL_TYPE StencilState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::StencilState>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::StencilState>() const;

// Ctor Parameters [CppParam { name: "m_Enabled", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ReadMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_WriteMask", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Padding", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PassOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ZFailOperationFront", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_CompareFunctionBack", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_PassOperationBack", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_FailOperationBack", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_ZFailOperationBack", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr StencilState(uint8_t m_Enabled, uint8_t m_ReadMask, uint8_t m_WriteMask, uint8_t m_Padding, uint8_t m_CompareFunctionFront, uint8_t m_PassOperationFront, uint8_t m_FailOperationFront, uint8_t m_ZFailOperationFront, uint8_t m_CompareFunctionBack, uint8_t m_PassOperationBack, uint8_t m_FailOperationBack, uint8_t m_ZFailOperationBack) noexcept;


                    constexpr StencilState(StencilState const&) = default;
                    constexpr StencilState(StencilState&&) = default;
                    constexpr StencilState& operator=(StencilState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StencilState& operator=(StencilState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StencilState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled))  m_Enabled;

constexpr void __set_m_Enabled(uint8_t value) ;

constexpr uint8_t __get_m_Enabled() const;

 uint8_t __declspec(property(get=__get_m_ReadMask, put=__set_m_ReadMask))  m_ReadMask;

constexpr void __set_m_ReadMask(uint8_t value) ;

constexpr uint8_t __get_m_ReadMask() const;

 uint8_t __declspec(property(get=__get_m_WriteMask, put=__set_m_WriteMask))  m_WriteMask;

constexpr void __set_m_WriteMask(uint8_t value) ;

constexpr uint8_t __get_m_WriteMask() const;

 uint8_t __declspec(property(get=__get_m_Padding, put=__set_m_Padding))  m_Padding;

constexpr void __set_m_Padding(uint8_t value) ;

constexpr uint8_t __get_m_Padding() const;

 uint8_t __declspec(property(get=__get_m_CompareFunctionFront, put=__set_m_CompareFunctionFront))  m_CompareFunctionFront;

constexpr void __set_m_CompareFunctionFront(uint8_t value) ;

constexpr uint8_t __get_m_CompareFunctionFront() const;

 uint8_t __declspec(property(get=__get_m_PassOperationFront, put=__set_m_PassOperationFront))  m_PassOperationFront;

constexpr void __set_m_PassOperationFront(uint8_t value) ;

constexpr uint8_t __get_m_PassOperationFront() const;

 uint8_t __declspec(property(get=__get_m_FailOperationFront, put=__set_m_FailOperationFront))  m_FailOperationFront;

constexpr void __set_m_FailOperationFront(uint8_t value) ;

constexpr uint8_t __get_m_FailOperationFront() const;

 uint8_t __declspec(property(get=__get_m_ZFailOperationFront, put=__set_m_ZFailOperationFront))  m_ZFailOperationFront;

constexpr void __set_m_ZFailOperationFront(uint8_t value) ;

constexpr uint8_t __get_m_ZFailOperationFront() const;

 uint8_t __declspec(property(get=__get_m_CompareFunctionBack, put=__set_m_CompareFunctionBack))  m_CompareFunctionBack;

constexpr void __set_m_CompareFunctionBack(uint8_t value) ;

constexpr uint8_t __get_m_CompareFunctionBack() const;

 uint8_t __declspec(property(get=__get_m_PassOperationBack, put=__set_m_PassOperationBack))  m_PassOperationBack;

constexpr void __set_m_PassOperationBack(uint8_t value) ;

constexpr uint8_t __get_m_PassOperationBack() const;

 uint8_t __declspec(property(get=__get_m_FailOperationBack, put=__set_m_FailOperationBack))  m_FailOperationBack;

constexpr void __set_m_FailOperationBack(uint8_t value) ;

constexpr uint8_t __get_m_FailOperationBack() const;

 uint8_t __declspec(property(get=__get_m_ZFailOperationBack, put=__set_m_ZFailOperationBack))  m_ZFailOperationBack;

constexpr void __set_m_ZFailOperationBack(uint8_t value) ;

constexpr uint8_t __get_m_ZFailOperationBack() const;


// Properties

 bool __declspec(property(put=set_enabled))  enabled;

 uint8_t __declspec(property(put=set_readMask))  readMask;

 uint8_t __declspec(property(put=set_writeMask))  writeMask;

 UnityEngine::Rendering::CompareFunction __declspec(property(put=set_compareFunctionFront))  compareFunctionFront;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_passOperationFront))  passOperationFront;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_failOperationFront))  failOperationFront;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_zFailOperationFront))  zFailOperationFront;

 UnityEngine::Rendering::CompareFunction __declspec(property(put=set_compareFunctionBack))  compareFunctionBack;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_passOperationBack))  passOperationBack;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_failOperationBack))  failOperationBack;

 UnityEngine::Rendering::StencilOp __declspec(property(put=set_zFailOperationBack))  zFailOperationBack;


// Methods

/// @brief Method set_enabled addr 0x2b75d60 size 0x6c virtual false final false
 void set_enabled(bool value) ;

/// @brief Method set_readMask addr 0x2b75dcc size 0x8 virtual false final false
 void set_readMask(uint8_t value) ;

/// @brief Method set_writeMask addr 0x2b75dd4 size 0x8 virtual false final false
 void set_writeMask(uint8_t value) ;

/// @brief Method set_compareFunctionFront addr 0x2b75ddc size 0x8 virtual false final false
 void set_compareFunctionFront(UnityEngine::Rendering::CompareFunction value) ;

/// @brief Method set_passOperationFront addr 0x2b75de4 size 0x8 virtual false final false
 void set_passOperationFront(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method set_failOperationFront addr 0x2b75dec size 0x8 virtual false final false
 void set_failOperationFront(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method set_zFailOperationFront addr 0x2b75df4 size 0x8 virtual false final false
 void set_zFailOperationFront(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method set_compareFunctionBack addr 0x2b75dfc size 0x8 virtual false final false
 void set_compareFunctionBack(UnityEngine::Rendering::CompareFunction value) ;

/// @brief Method set_passOperationBack addr 0x2b75e04 size 0x8 virtual false final false
 void set_passOperationBack(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method set_failOperationBack addr 0x2b75e0c size 0x8 virtual false final false
 void set_failOperationBack(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method set_zFailOperationBack addr 0x2b75e14 size 0x8 virtual false final false
 void set_zFailOperationBack(UnityEngine::Rendering::StencilOp value) ;

/// @brief Method Equals addr 0x2b75e1c size 0xb0 virtual true final true
 bool Equals(UnityEngine::Rendering::StencilState other) ;

/// @brief Method Equals addr 0x2b75ecc size 0x7c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2b75f48 size 0xf0 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::StencilState, "UnityEngine.Rendering", "StencilState");
