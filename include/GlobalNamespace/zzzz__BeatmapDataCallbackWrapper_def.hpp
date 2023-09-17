#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
// Type: ::BeatmapDataCallbackWrapper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4827))
// CS Name: BeatmapDataCallbackWrapper
class CORDL_TYPE BeatmapDataCallbackWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BeatmapDataCallbackWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: " const&", def_value: None }]
constexpr BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper", modifiers: "&&", def_value: None }]
constexpr BeatmapDataCallbackWrapper(BeatmapDataCallbackWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataCallbackWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDataCallbackWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataCallbackWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataCallbackWrapper& operator=(BeatmapDataCallbackWrapper&& o) noexcept = default;
  constexpr BeatmapDataCallbackWrapper& operator=(BeatmapDataCallbackWrapper const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get_BasicBeatmapEventType, put=__set_BasicBeatmapEventType))  BasicBeatmapEventType;

constexpr void __set_BasicBeatmapEventType(::System::Type value) ;

constexpr ::System::Type __get_BasicBeatmapEventType() const;

 float_t __declspec(property(get=__get_aheadTime, put=__set_aheadTime))  aheadTime;

constexpr void __set_aheadTime(float_t value) ;

constexpr float_t __get_aheadTime() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_subtypeIdentifiers, put=__set_subtypeIdentifiers))  subtypeIdentifiers;

constexpr void __set_subtypeIdentifiers(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_subtypeIdentifiers() const;


// Methods

// Ctor Parameters [CppParam { name: "aheadTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "BasicBeatmapEventType", ty: "::System::Type", modifiers: "", def_value: None }, CppParam { name: "subtypeIdentifiers", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }]
explicit BeatmapDataCallbackWrapper(float_t aheadTime, ::System::Type BasicBeatmapEventType, ::ArrayW<int32_t> subtypeIdentifiers) ;

/// @brief Method .ctor addr 0x2231ffc size 0x40 virtual false final false
 void _ctor(float_t aheadTime, ::System::Type BasicBeatmapEventType, ::ArrayW<int32_t> subtypeIdentifiers) ;

/// @brief Method CallCallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void CallCallback(::GlobalNamespace::BeatmapDataItem beatmapData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataCallbackWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataCallbackWrapper, "", "BeatmapDataCallbackWrapper");
