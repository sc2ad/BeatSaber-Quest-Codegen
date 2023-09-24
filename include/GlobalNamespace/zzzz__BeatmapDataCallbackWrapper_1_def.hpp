#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallbackWrapper_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class BeatmapDataCallbackWrapper_1<T>;
}
// Type: ::BeatmapDataCallbackWrapper`1
// Type: ::BeatmapDataCallbackWrapper`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4827)), TypeDefinitionIndex(TypeDefinitionIndex(4828))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4828), inst: 2 })
// CS Name: BeatmapDataCallbackWrapper`1
class CORDL_TYPE BeatmapDataCallbackWrapper_1<T> : public GlobalNamespace::BeatmapDataCallbackWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapDataCallbackWrapper_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: " const&", def_value: None }]
constexpr BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: "&&", def_value: None }]
constexpr BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDataCallbackWrapper_1(void* ptr) noexcept : GlobalNamespace::BeatmapDataCallbackWrapper(ptr) {
}


  constexpr BeatmapDataCallbackWrapper_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDataCallbackWrapper_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDataCallbackWrapper_1& operator=(BeatmapDataCallbackWrapper_1&& o) noexcept = default;
  constexpr BeatmapDataCallbackWrapper_1& operator=(BeatmapDataCallbackWrapper_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapDataCallback_1<T> __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(GlobalNamespace::BeatmapDataCallback_1<T> value) ;

constexpr GlobalNamespace::BeatmapDataCallback_1<T> __get__callback() const;


// Methods

static GlobalNamespace::BeatmapDataCallbackWrapper_1<T> New_ctor(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::BeatmapDataCallback_1<T> callback, float_t aheadTime, ::ArrayW<int32_t> beatmapEventSubtypeIdentifiers) ;

/// @brief Method CallCallback addr 0x0 size 0xffffffffffffffff virtual true final false
 void CallCallback(GlobalNamespace::BeatmapDataItem beatmapData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::BeatmapDataCallbackWrapper_1, "", "BeatmapDataCallbackWrapper`1");
