#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct ____UnityEngine__UISystemProfilerApi__SampleType;
}
namespace UnityEngine {
class UISystemProfilerApi;
}
// Type: ::SampleType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15761))
// CS Name: UnityEngine.UISystemProfilerApi::SampleType
struct CORDL_TYPE ____UnityEngine__UISystemProfilerApi__SampleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UISystemProfilerApi__SampleType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UISystemProfilerApi__SampleType(____UnityEngine__UISystemProfilerApi__SampleType const&) = default;
                    constexpr ____UnityEngine__UISystemProfilerApi__SampleType(____UnityEngine__UISystemProfilerApi__SampleType&&) = default;
                    constexpr ____UnityEngine__UISystemProfilerApi__SampleType& operator=(____UnityEngine__UISystemProfilerApi__SampleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UISystemProfilerApi__SampleType& operator=(____UnityEngine__UISystemProfilerApi__SampleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UISystemProfilerApi__SampleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UISystemProfilerApi__SampleType_Unwrapped : int32_t {
__Layout = 0,
__Render = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UISystemProfilerApi__SampleType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UISystemProfilerApi__SampleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Layout offset 0
static ::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType const Layout;

/// @brief Field Render offset 0
static ::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType const Render;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::UISystemProfilerApi
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15762))
// CS Name: UnityEngine.UISystemProfilerApi
class CORDL_TYPE UISystemProfilerApi : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SampleType = ::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UISystemProfilerApi() = default;

// Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: " const&", def_value: None }]
constexpr UISystemProfilerApi(UISystemProfilerApi const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UISystemProfilerApi", modifiers: "&&", def_value: None }]
constexpr UISystemProfilerApi(UISystemProfilerApi&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UISystemProfilerApi(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UISystemProfilerApi& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UISystemProfilerApi& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UISystemProfilerApi& operator=(UISystemProfilerApi&& o) noexcept = default;
  constexpr UISystemProfilerApi& operator=(UISystemProfilerApi const& o) noexcept = default;
                


// Methods

/// @brief Method BeginSample addr 0x2d33144 size 0x3c virtual false final false
static void BeginSample(::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType type) ;

/// @brief Method EndSample addr 0x2d33180 size 0x3c virtual false final false
static void EndSample(::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType type) ;

/// @brief Method AddMarker addr 0x2d331bc size 0x44 virtual false final false
static void AddMarker(::StringW name, ::UnityEngine::Object obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__UISystemProfilerApi__SampleType, "UnityEngine", "UISystemProfilerApi/SampleType");
NEED_NO_BOX(::UnityEngine::UISystemProfilerApi);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UISystemProfilerApi, "UnityEngine", "UISystemProfilerApi");
