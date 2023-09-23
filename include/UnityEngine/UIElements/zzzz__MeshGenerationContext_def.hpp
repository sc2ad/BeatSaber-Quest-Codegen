#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class IStylePainter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContext__MeshFlags;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
// Type: ::MeshFlags
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7436))
// CS Name: UnityEngine.UIElements.MeshGenerationContext::MeshFlags
struct CORDL_TYPE UnityEngine__UIElements__MeshGenerationContext__MeshFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__MeshGenerationContext__MeshFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__MeshGenerationContext__MeshFlags(UnityEngine__UIElements__MeshGenerationContext__MeshFlags const&) = default;
                    constexpr UnityEngine__UIElements__MeshGenerationContext__MeshFlags(UnityEngine__UIElements__MeshGenerationContext__MeshFlags&&) = default;
                    constexpr UnityEngine__UIElements__MeshGenerationContext__MeshFlags& operator=(UnityEngine__UIElements__MeshGenerationContext__MeshFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__MeshGenerationContext__MeshFlags& operator=(UnityEngine__UIElements__MeshGenerationContext__MeshFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__MeshGenerationContext__MeshFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__MeshGenerationContext__MeshFlags_Unwrapped : int32_t {
__None = 0,
__UVisDisplacement = 1,
__SkipDynamicAtlas = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__MeshGenerationContext__MeshFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__MeshGenerationContext__MeshFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags const None;

/// @brief Field UVisDisplacement offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags const UVisDisplacement;

/// @brief Field SkipDynamicAtlas offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags const SkipDynamicAtlas;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContext
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7437))
// CS Name: UnityEngine.UIElements.MeshGenerationContext
class CORDL_TYPE MeshGenerationContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MeshFlags = UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeshGenerationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: " const&", def_value: None }]
constexpr MeshGenerationContext(MeshGenerationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContext", modifiers: "&&", def_value: None }]
constexpr MeshGenerationContext(MeshGenerationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshGenerationContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshGenerationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshGenerationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshGenerationContext& operator=(MeshGenerationContext&& o) noexcept = default;
  constexpr MeshGenerationContext& operator=(MeshGenerationContext const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::IStylePainter __declspec(property(get=__get_painter, put=__set_painter))  painter;

constexpr void __set_painter(UnityEngine::UIElements::IStylePainter value) ;

constexpr UnityEngine::UIElements::IStylePainter __get_painter() const;


// Methods

// Ctor Parameters [CppParam { name: "painter", ty: "UnityEngine::UIElements::IStylePainter", modifiers: "", def_value: None }]
explicit MeshGenerationContext(UnityEngine::UIElements::IStylePainter painter) ;

/// @brief Method .ctor addr 0x2d05fd8 size 0x28 virtual false final false
 void _ctor(UnityEngine::UIElements::IStylePainter painter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags, "UnityEngine.UIElements", "MeshGenerationContext/MeshFlags");
NEED_NO_BOX(UnityEngine::UIElements::MeshGenerationContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MeshGenerationContext, "UnityEngine.UIElements", "MeshGenerationContext");
