#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Cursor;
}
// Type: UnityEngine.UIElements::Cursor
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6893))
// CS Name: UnityEngine.UIElements.Cursor
struct CORDL_TYPE Cursor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::Cursor>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::Cursor>() const;

// Ctor Parameters [CppParam { name: "_texture_k__BackingField", ty: "UnityEngine::Texture2D", modifiers: "", def_value: None }, CppParam { name: "_hotspot_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_defaultCursorId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Cursor(UnityEngine::Texture2D _texture_k__BackingField, UnityEngine::Vector2 _hotspot_k__BackingField, int32_t _defaultCursorId_k__BackingField) noexcept;


                    constexpr Cursor(Cursor const&) = default;
                    constexpr Cursor(Cursor&&) = default;
                    constexpr Cursor& operator=(Cursor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Cursor& operator=(Cursor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Cursor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get__texture_k__BackingField, put=__set__texture_k__BackingField))  _texture_k__BackingField;

constexpr void __set__texture_k__BackingField(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get__texture_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__hotspot_k__BackingField, put=__set__hotspot_k__BackingField))  _hotspot_k__BackingField;

constexpr void __set__hotspot_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__hotspot_k__BackingField() const;

 int32_t __declspec(property(get=__get__defaultCursorId_k__BackingField, put=__set__defaultCursorId_k__BackingField))  _defaultCursorId_k__BackingField;

constexpr void __set__defaultCursorId_k__BackingField(int32_t value) ;

constexpr int32_t __get__defaultCursorId_k__BackingField() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_texture, put=set_texture))  texture;

 UnityEngine::Vector2 __declspec(property(get=get_hotspot, put=set_hotspot))  hotspot;

 int32_t __declspec(property(get=get_defaultCursorId, put=set_defaultCursorId))  defaultCursorId;


// Methods

/// @brief Method get_texture addr 0x2c46354 size 0x8 virtual false final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method set_texture addr 0x2c4635c size 0x8 virtual false final false
 void set_texture(UnityEngine::Texture2D value) ;

/// @brief Method get_hotspot addr 0x2c46364 size 0x8 virtual false final false
 UnityEngine::Vector2 get_hotspot() ;

/// @brief Method set_hotspot addr 0x2c4636c size 0x8 virtual false final false
 void set_hotspot(UnityEngine::Vector2 value) ;

/// @brief Method get_defaultCursorId addr 0x2c46374 size 0x8 virtual false final false
 int32_t get_defaultCursorId() ;

/// @brief Method set_defaultCursorId addr 0x2c4637c size 0x8 virtual false final false
 void set_defaultCursorId(int32_t value) ;

/// @brief Method Equals addr 0x2c46384 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c46414 size 0xb0 virtual true final true
 bool Equals(UnityEngine::UIElements::Cursor other) ;

/// @brief Method GetHashCode addr 0x2c464c4 size 0xd8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2c4659c size 0x30 virtual false final false
static bool op_Equality(UnityEngine::UIElements::Cursor style1, UnityEngine::UIElements::Cursor style2) ;

/// @brief Method ToString addr 0x2c465cc size 0x88 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Cursor, "UnityEngine.UIElements", "Cursor");
