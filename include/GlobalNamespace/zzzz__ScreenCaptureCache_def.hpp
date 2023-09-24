#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__ScreenCaptureCache__ScreenshotType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ScreenCaptureCache__ScreenshotType;
}
namespace GlobalNamespace {
class ScreenCaptureCache;
}
// Type: ::ScreenshotType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15327))
// CS Name: ScreenCaptureCache::ScreenshotType
struct CORDL_TYPE GlobalNamespace__ScreenCaptureCache__ScreenshotType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScreenCaptureCache__ScreenshotType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ScreenCaptureCache__ScreenshotType(GlobalNamespace__ScreenCaptureCache__ScreenshotType const&) = default;
                    constexpr GlobalNamespace__ScreenCaptureCache__ScreenshotType(GlobalNamespace__ScreenCaptureCache__ScreenshotType&&) = default;
                    constexpr GlobalNamespace__ScreenCaptureCache__ScreenshotType& operator=(GlobalNamespace__ScreenCaptureCache__ScreenshotType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScreenCaptureCache__ScreenshotType& operator=(GlobalNamespace__ScreenCaptureCache__ScreenshotType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScreenCaptureCache__ScreenshotType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ScreenCaptureCache__ScreenshotType_Unwrapped : int32_t {
__Game = 0,
__Menu = 1,
__Other = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ScreenCaptureCache__ScreenshotType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ScreenCaptureCache__ScreenshotType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Game offset 0
static GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType const Game;

/// @brief Field Menu offset 0
static GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType const Menu;

/// @brief Field Other offset 0
static GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType const Other;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScreenCaptureCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15328))
// CS Name: ScreenCaptureCache
class CORDL_TYPE ScreenCaptureCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ScreenshotType = GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ScreenCaptureCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: " const&", def_value: None }]
constexpr ScreenCaptureCache(ScreenCaptureCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScreenCaptureCache", modifiers: "&&", def_value: None }]
constexpr ScreenCaptureCache(ScreenCaptureCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScreenCaptureCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScreenCaptureCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScreenCaptureCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScreenCaptureCache& operator=(ScreenCaptureCache&& o) noexcept = default;
  constexpr ScreenCaptureCache& operator=(ScreenCaptureCache const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType,UnityEngine::Texture2D> __declspec(property(get=__get__cache, put=__set__cache))  _cache;

constexpr void __set__cache(System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType,UnityEngine::Texture2D> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType,UnityEngine::Texture2D> __get__cache() const;


// Methods

/// @brief Method GetLastScreenshot addr 0x267a618 size 0x78 virtual false final false
 UnityEngine::Texture2D GetLastScreenshot(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType) ;

/// @brief Method StoreScreenshot addr 0x267a2d4 size 0xac virtual false final false
 void StoreScreenshot(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType screenshotType, UnityEngine::Texture2D texture) ;

static GlobalNamespace::ScreenCaptureCache New_ctor() ;

/// @brief Method .ctor addr 0x267a690 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScreenCaptureCache__ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
NEED_NO_BOX(GlobalNamespace::ScreenCaptureCache);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureCache, "", "ScreenCaptureCache");
