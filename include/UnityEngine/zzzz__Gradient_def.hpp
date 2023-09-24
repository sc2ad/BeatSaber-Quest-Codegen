#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
struct GradientMode;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine {
class Gradient;
}
// Type: UnityEngine::Gradient
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10198))
// CS Name: UnityEngine.Gradient
class CORDL_TYPE Gradient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Gradient>
constexpr operator  System::IEquatable_1<UnityEngine::Gradient>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Gradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: " const&", def_value: None }]
constexpr Gradient(Gradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gradient", modifiers: "&&", def_value: None }]
constexpr Gradient(Gradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gradient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Gradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gradient& operator=(Gradient&& o) noexcept = default;
  constexpr Gradient& operator=(Gradient const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 ::ArrayW<UnityEngine::GradientColorKey> __declspec(property(get=get_colorKeys, put=set_colorKeys))  colorKeys;

 ::ArrayW<UnityEngine::GradientAlphaKey> __declspec(property(get=get_alphaKeys, put=set_alphaKeys))  alphaKeys;

 UnityEngine::GradientMode __declspec(property(put=set_mode))  mode;


// Methods

/// @brief Method Init addr 0x2b66fbc size 0x28 virtual false final false
static ::cordl_internals::intptr_t Init() ;

/// @brief Method Cleanup addr 0x2b66fe4 size 0x3c virtual false final false
 void Cleanup() ;

/// @brief Method Internal_Equals addr 0x2b67020 size 0x44 virtual false final false
 bool Internal_Equals(::cordl_internals::intptr_t other) ;

static UnityEngine::Gradient New_ctor() ;

/// @brief Method .ctor addr 0x2b67064 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b670ac size 0xb8 virtual true final false
 void Finalize() ;

/// @brief Method Evaluate addr 0x2b67164 size 0x68 virtual false final false
 UnityEngine::Color Evaluate(float_t time) ;

/// @brief Method get_colorKeys addr 0x2b67220 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::GradientColorKey> get_colorKeys() ;

/// @brief Method set_colorKeys addr 0x2b6725c size 0x44 virtual false final false
 void set_colorKeys(::ArrayW<UnityEngine::GradientColorKey> value) ;

/// @brief Method get_alphaKeys addr 0x2b672a0 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::GradientAlphaKey> get_alphaKeys() ;

/// @brief Method set_alphaKeys addr 0x2b672dc size 0x44 virtual false final false
 void set_alphaKeys(::ArrayW<UnityEngine::GradientAlphaKey> value) ;

/// @brief Method set_mode addr 0x2b67320 size 0x44 virtual false final false
 void set_mode(UnityEngine::GradientMode value) ;

/// @brief Method SetKeys addr 0x2b67364 size 0x54 virtual false final false
 void SetKeys(::ArrayW<UnityEngine::GradientColorKey> colorKeys, ::ArrayW<UnityEngine::GradientAlphaKey> alphaKeys) ;

/// @brief Method Equals addr 0x2b673b8 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method Equals addr 0x2b67480 size 0xc8 virtual true final true
 bool Equals(UnityEngine::Gradient other) ;

/// @brief Method GetHashCode addr 0x2b67548 size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Evaluate_Injected addr 0x2b671cc size 0x54 virtual false final false
 void Evaluate_Injected(float_t time, ByRef<UnityEngine::Color> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Gradient);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Gradient, "UnityEngine", "Gradient");
