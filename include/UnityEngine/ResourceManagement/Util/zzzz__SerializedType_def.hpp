#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
// Type: UnityEngine.ResourceManagement.Util::SerializedType
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14264))
// CS Name: UnityEngine.ResourceManagement.Util.SerializedType
struct CORDL_TYPE SerializedType : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_AssemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ClassName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_CachedType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "_ValueChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr SerializedType(::StringW m_AssemblyName, ::StringW m_ClassName, ::System::Type m_CachedType, bool _ValueChanged_k__BackingField) noexcept;


                    constexpr SerializedType(SerializedType const&) = default;
                    constexpr SerializedType(SerializedType&&) = default;
                    constexpr SerializedType& operator=(SerializedType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SerializedType& operator=(SerializedType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SerializedType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_m_AssemblyName, put=__set_m_AssemblyName))  m_AssemblyName;

constexpr void __set_m_AssemblyName(::StringW value) ;

constexpr ::StringW __get_m_AssemblyName() const;

 ::StringW __declspec(property(get=__get_m_ClassName, put=__set_m_ClassName))  m_ClassName;

constexpr void __set_m_ClassName(::StringW value) ;

constexpr ::StringW __get_m_ClassName() const;

 ::System::Type __declspec(property(get=__get_m_CachedType, put=__set_m_CachedType))  m_CachedType;

constexpr void __set_m_CachedType(::System::Type value) ;

constexpr ::System::Type __get_m_CachedType() const;

 bool __declspec(property(get=__get__ValueChanged_k__BackingField, put=__set__ValueChanged_k__BackingField))  _ValueChanged_k__BackingField;

constexpr void __set__ValueChanged_k__BackingField(bool value) ;

constexpr bool __get__ValueChanged_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_AssemblyName))  AssemblyName;

 ::StringW __declspec(property(get=get_ClassName))  ClassName;

 ::System::Type __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_ValueChanged, put=set_ValueChanged))  ValueChanged;


// Methods

/// @brief Method get_AssemblyName addr 0x2a3aadc size 0x8 virtual false final false
 ::StringW get_AssemblyName() ;

/// @brief Method get_ClassName addr 0x2a3aae4 size 0x8 virtual false final false
 ::StringW get_ClassName() ;

/// @brief Method ToString addr 0x2a3aaec size 0xb0 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Value addr 0x2a3ab9c size 0x1f4 virtual false final false
 ::System::Type get_Value() ;

/// @brief Method set_Value addr 0x2a3ad90 size 0xc0 virtual false final false
 void set_Value(::System::Type value) ;

/// @brief Method get_ValueChanged addr 0x2a3ae50 size 0x8 virtual false final false
 bool get_ValueChanged() ;

/// @brief Method set_ValueChanged addr 0x2a3ae58 size 0xc virtual false final false
 void set_ValueChanged(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
