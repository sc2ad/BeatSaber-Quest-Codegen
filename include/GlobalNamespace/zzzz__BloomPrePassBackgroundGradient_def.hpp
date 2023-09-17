#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct Color32;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundGradient;
}
// Type: ::BloomPrePassBackgroundGradient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14629))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14621))
// CS Name: BloomPrePassBackgroundGradient
class CORDL_TYPE BloomPrePassBackgroundGradient : public ::GlobalNamespace::BloomPrePassBackgroundTextureGradient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BloomPrePassBackgroundGradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundGradient", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundGradient(BloomPrePassBackgroundGradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundGradient(void* ptr) noexcept : ::GlobalNamespace::BloomPrePassBackgroundTextureGradient(ptr) {
}


  constexpr BloomPrePassBackgroundGradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundGradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundGradient& operator=(BloomPrePassBackgroundGradient&& o) noexcept = default;
  constexpr BloomPrePassBackgroundGradient& operator=(BloomPrePassBackgroundGradient const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Gradient __declspec(property(get=__get__gradient, put=__set__gradient))  _gradient;

constexpr void __set__gradient(::UnityEngine::Gradient value) ;

constexpr ::UnityEngine::Gradient __get__gradient() const;


// Methods

/// @brief Method UpdatePixels addr 0x1f925e4 size 0x318 virtual true final false
 void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels) ;

// Ctor Parameters []
explicit BloomPrePassBackgroundGradient() ;

/// @brief Method .ctor addr 0x1f928fc size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundGradient, "", "BloomPrePassBackgroundGradient");
