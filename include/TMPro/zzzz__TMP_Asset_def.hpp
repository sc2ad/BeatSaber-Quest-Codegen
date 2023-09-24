#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class TMP_Asset;
}
// Type: TMPro::TMP_Asset
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12269))
// CS Name: TMPro.TMP_Asset
class CORDL_TYPE TMP_Asset : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TMP_Asset() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: " const&", def_value: None }]
constexpr TMP_Asset(TMP_Asset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Asset", modifiers: "&&", def_value: None }]
constexpr TMP_Asset(TMP_Asset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Asset(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TMP_Asset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Asset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Asset& operator=(TMP_Asset&& o) noexcept = default;
  constexpr TMP_Asset& operator=(TMP_Asset const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_InstanceID, put=__set_m_InstanceID))  m_InstanceID;

constexpr void __set_m_InstanceID(int32_t value) ;

constexpr int32_t __get_m_InstanceID() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 int32_t __declspec(property(get=__get_materialHashCode, put=__set_materialHashCode))  materialHashCode;

constexpr void __set_materialHashCode(int32_t value) ;

constexpr int32_t __get_materialHashCode() const;


// Properties

 int32_t __declspec(property(get=get_instanceID))  instanceID;


// Methods

/// @brief Method get_instanceID addr 0x2a69d38 size 0x28 virtual false final false
 int32_t get_instanceID() ;

static TMPro::TMP_Asset New_ctor() ;

/// @brief Method .ctor addr 0x2a69d60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_Asset);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Asset, "TMPro", "TMP_Asset");
