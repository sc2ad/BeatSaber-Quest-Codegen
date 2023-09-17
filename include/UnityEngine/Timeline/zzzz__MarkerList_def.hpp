#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct MarkerList;
}
// Type: UnityEngine.Timeline::MarkerList
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14100))
// CS Name: UnityEngine.Timeline.MarkerList
struct CORDL_TYPE MarkerList : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISerializationCallbackReceiver
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver() const;

// Ctor Parameters [CppParam { name: "m_Objects", ty: "::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject>", modifiers: "", def_value: None }, CppParam { name: "m_Cache", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker>", modifiers: "", def_value: None }, CppParam { name: "m_CacheDirty", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_HasNotifications", ty: "bool", modifiers: "", def_value: None }]
constexpr MarkerList(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> m_Objects, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> m_Cache, bool m_CacheDirty, bool m_HasNotifications) noexcept;


                    constexpr MarkerList(MarkerList const&) = default;
                    constexpr MarkerList(MarkerList&&) = default;
                    constexpr MarkerList& operator=(MarkerList const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MarkerList& operator=(MarkerList&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MarkerList(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> __declspec(property(get=__get_m_Objects, put=__set_m_Objects))  m_Objects;

constexpr void __set_m_Objects(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> __get_m_Objects() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> __declspec(property(get=__get_m_Cache, put=__set_m_Cache))  m_Cache;

constexpr void __set_m_Cache(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> __get_m_Cache() const;

 bool __declspec(property(get=__get_m_CacheDirty, put=__set_m_CacheDirty))  m_CacheDirty;

constexpr void __set_m_CacheDirty(bool value) ;

constexpr bool __get_m_CacheDirty() const;

 bool __declspec(property(get=__get_m_HasNotifications, put=__set_m_HasNotifications))  m_HasNotifications;

constexpr void __set_m_HasNotifications(bool value) ;

constexpr bool __get_m_HasNotifications() const;


// Properties

 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> __declspec(property(get=get_markers))  markers;

 int32_t __declspec(property(get=get_Count))  Count;

 ::UnityEngine::Timeline::IMarker __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_markers addr 0x2acfe68 size 0x18 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker> get_markers() ;

/// @brief Method .ctor addr 0x2ac89e4 size 0xd4 virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Add addr 0x2ac5568 size 0xec virtual false final false
 void Add(::UnityEngine::ScriptableObject item) ;

/// @brief Method Remove addr 0x2ac451c size 0x1e4 virtual false final false
 bool Remove(::UnityEngine::Timeline::IMarker item) ;

/// @brief Method Remove addr 0x2ac5688 size 0xc0 virtual false final false
 bool Remove(::UnityEngine::ScriptableObject item, ::UnityEngine::Timeline::TimelineAsset timelineAsset, ::UnityEngine::Playables::PlayableAsset thingToDirty) ;

/// @brief Method Clear addr 0x2ac54f0 size 0x70 virtual false final false
 void Clear() ;

/// @brief Method Contains addr 0x2ad0158 size 0x58 virtual false final false
 bool Contains(::UnityEngine::ScriptableObject item) ;

/// @brief Method GetMarkers addr 0x2ac4700 size 0x18 virtual false final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker> GetMarkers() ;

/// @brief Method get_Count addr 0x2ac4718 size 0x50 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x2ac4770 size 0x60 virtual false final false
 ::UnityEngine::Timeline::IMarker get_Item(int32_t idx) ;

/// @brief Method GetRawMarkerList addr 0x2ad01b0 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject> GetRawMarkerList() ;

/// @brief Method CreateMarker addr 0x2ac4214 size 0x300 virtual false final false
 ::UnityEngine::Timeline::IMarker CreateMarker(::System::Type type, double_t time, ::UnityEngine::Timeline::TrackAsset owner) ;

/// @brief Method HasNotifications addr 0x2ac89cc size 0x18 virtual false final false
 bool HasNotifications() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2ad01b8 size 0x4 virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2ad01bc size 0xc virtual true final true
 void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method BuildCache addr 0x2acfe80 size 0x2d8 virtual false final false
 void BuildCache() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::MarkerList, "UnityEngine.Timeline", "MarkerList");
