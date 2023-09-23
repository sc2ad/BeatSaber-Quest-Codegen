#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::BasicBeatmapEventType::BasicBeatmapEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::BasicBeatmapEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BasicBeatmapEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event0{0};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event1{1};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event2{2};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event3{3};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event4{4};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event5{5};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event6{6};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event7{7};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event8{8};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event9{9};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event10{10};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event11{11};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event12{12};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event13{13};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event14{14};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event15{15};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event16{16};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event17{17};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event18{18};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event19{19};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event20{20};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Event21{21};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::VoidEvent{-1};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Special0{40};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Special1{41};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Special2{42};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::Special3{43};
constexpr GlobalNamespace::BasicBeatmapEventType  GlobalNamespace::BasicBeatmapEventType::BpmChange{100};
