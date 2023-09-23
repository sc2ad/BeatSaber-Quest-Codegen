#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
// Forward declare root types
namespace UnityEngine {
class AnimatorControllerParameter;
}
// Type: UnityEngine::AnimatorControllerParameter
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15031))
// CS Name: UnityEngine.AnimatorControllerParameter
class CORDL_TYPE AnimatorControllerParameter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AnimatorControllerParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: " const&", def_value: None }]
constexpr AnimatorControllerParameter(AnimatorControllerParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorControllerParameter", modifiers: "&&", def_value: None }]
constexpr AnimatorControllerParameter(AnimatorControllerParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AnimatorControllerParameter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AnimatorControllerParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AnimatorControllerParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AnimatorControllerParameter& operator=(AnimatorControllerParameter&& o) noexcept = default;
  constexpr AnimatorControllerParameter& operator=(AnimatorControllerParameter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 UnityEngine::AnimatorControllerParameterType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(UnityEngine::AnimatorControllerParameterType value) ;

constexpr UnityEngine::AnimatorControllerParameterType __get_m_Type() const;

 float_t __declspec(property(get=__get_m_DefaultFloat, put=__set_m_DefaultFloat))  m_DefaultFloat;

constexpr void __set_m_DefaultFloat(float_t value) ;

constexpr float_t __get_m_DefaultFloat() const;

 int32_t __declspec(property(get=__get_m_DefaultInt, put=__set_m_DefaultInt))  m_DefaultInt;

constexpr void __set_m_DefaultInt(int32_t value) ;

constexpr int32_t __get_m_DefaultInt() const;

 bool __declspec(property(get=__get_m_DefaultBool, put=__set_m_DefaultBool))  m_DefaultBool;

constexpr void __set_m_DefaultBool(bool value) ;

constexpr bool __get_m_DefaultBool() const;


// Properties

 ::StringW __declspec(property(get=get_name))  name;


// Methods

/// @brief Method get_name addr 0x2b1a280 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method Equals addr 0x2b1a288 size 0xdc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetHashCode addr 0x2b1a364 size 0x20 virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit AnimatorControllerParameter() ;

/// @brief Method .ctor addr 0x2b1a384 size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AnimatorControllerParameter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorControllerParameter, "UnityEngine", "AnimatorControllerParameter");
