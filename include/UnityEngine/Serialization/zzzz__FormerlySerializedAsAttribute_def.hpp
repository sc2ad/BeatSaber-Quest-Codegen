#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::Serialization {
class FormerlySerializedAsAttribute;
}
// Type: UnityEngine.Serialization::FormerlySerializedAsAttribute
namespace UnityEngine::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10319))
// CS Name: UnityEngine.Serialization.FormerlySerializedAsAttribute
class CORDL_TYPE FormerlySerializedAsAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FormerlySerializedAsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormerlySerializedAsAttribute", modifiers: " const&", def_value: None }]
constexpr FormerlySerializedAsAttribute(FormerlySerializedAsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormerlySerializedAsAttribute", modifiers: "&&", def_value: None }]
constexpr FormerlySerializedAsAttribute(FormerlySerializedAsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormerlySerializedAsAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr FormerlySerializedAsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormerlySerializedAsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormerlySerializedAsAttribute& operator=(FormerlySerializedAsAttribute&& o) noexcept = default;
  constexpr FormerlySerializedAsAttribute& operator=(FormerlySerializedAsAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_oldName, put=__set_m_oldName))  m_oldName;

constexpr void __set_m_oldName(::StringW value) ;

constexpr ::StringW __get_m_oldName() const;


// Methods

static UnityEngine::Serialization::FormerlySerializedAsAttribute New_ctor(::StringW oldName) ;

/// @brief Method .ctor addr 0x2b78cac size 0x28 virtual false final false
 void _ctor(::StringW oldName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Serialization
NEED_NO_BOX(UnityEngine::Serialization::FormerlySerializedAsAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Serialization::FormerlySerializedAsAttribute, "UnityEngine.Serialization", "FormerlySerializedAsAttribute");
