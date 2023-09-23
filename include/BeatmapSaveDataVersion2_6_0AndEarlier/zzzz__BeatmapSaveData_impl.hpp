#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event0{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event1{1};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event2{2};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event3{3};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event4{4};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event5{5};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event6{6};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event7{7};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event8{8};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event9{9};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event10{10};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event11{11};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event12{12};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event13{13};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event14{14};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event15{15};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event16{16};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Event17{17};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::VoidEvent{-1};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Special0{40};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Special1{41};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Special2{42};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::Special3{43};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType::BpmChange{100};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData.get_floatValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::*)(float_t, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType, int32_t, float_t)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xd9bc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__set__time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__set__type(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>(value));
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__get__type() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__set__value(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__get__value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__set__floatValue(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::__get__floatValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData(float_t time, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType type, int32_t value, float_t floatValue)  : BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>(time, type, value, floatValue))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData::_ctor(float_t time, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType type, int32_t value, float_t floatValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, type, value, floatValue);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::Note{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::Obstacle{2};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapObjectType::Slider{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::NoteA{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::NoteB{1};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::GhostNote{2};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::Bomb{3};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType::None{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::ColorA{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::ColorB{1};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType::None{-1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType::Normal{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderType::Burst{1};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData.get_lineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData.get_cutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bd78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType, GlobalNamespace::NoteCutDirection)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xd9bd80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__set__time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__set__lineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__set__lineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__get__lineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__set__type(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType>(value));
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__get__type() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__set__cutDirection(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::__get__cutDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_lineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::get_cutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutDirection, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "type", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType", modifiers: "", def_value: None }, CppParam { name: "cutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType type, GlobalNamespace::NoteCutDirection cutDirection)  : BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>(time, lineIndex, lineLayer, type, cutDirection))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData::_ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType type, GlobalNamespace::NoteCutDirection cutDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, lineLayer, type, cutDirection);
}
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bdd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData.get_lineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData.get_offsetDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OffsetDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::*)(float_t, int32_t, GlobalNamespace::NoteLineLayer, GlobalNamespace::OffsetDirection)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xd9bdf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OffsetDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__set__time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__set__lineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__set__lineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__get__lineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__set__offsetDirection(GlobalNamespace::OffsetDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OffsetDirection, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OffsetDirection>(value));
}
constexpr GlobalNamespace::OffsetDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::__get__offsetDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OffsetDirection, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_lineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::OffsetDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::get_offsetDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OffsetDirection, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "offsetDirection", ty: "GlobalNamespace::OffsetDirection", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::OffsetDirection offsetDirection)  : BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>(time, lineIndex, lineLayer, offsetDirection))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData::_ctor(float_t time, int32_t lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::OffsetDirection offsetDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OffsetDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, lineLayer, offsetDirection);
}
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_headLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_headLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_headControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_headCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_tailTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_tailLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_tailLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteLineLayer (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_tailControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_tailCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData.get_sliderMidAnchorMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SliderMidAnchorMode (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9be94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::*)(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType, float_t, int32_t, GlobalNamespace::NoteLineLayer, float_t, GlobalNamespace::NoteCutDirection, float_t, int32_t, GlobalNamespace::NoteLineLayer, float_t, GlobalNamespace::NoteCutDirection, GlobalNamespace::SliderMidAnchorMode)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xd9be9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__colorType(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType>(value));
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__colorType() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__headTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__headTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__headLineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__headLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__headLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__headLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__headControlPointLengthMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__headControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__headCutDirection(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__headCutDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__tailTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__tailTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__tailLineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__tailLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__tailLineLayer(GlobalNamespace::NoteLineLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteLineLayer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteLineLayer>(value));
}
constexpr GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__tailLineLayer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteLineLayer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__tailControlPointLengthMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__tailControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__tailCutDirection(GlobalNamespace::NoteCutDirection value)  {
::cordl_internals::setInstanceField<GlobalNamespace::NoteCutDirection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::NoteCutDirection>(value));
}
constexpr GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__tailCutDirection() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::NoteCutDirection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__set__sliderMidAnchorMode(GlobalNamespace::SliderMidAnchorMode value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SliderMidAnchorMode, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::SliderMidAnchorMode>(value));
}
constexpr GlobalNamespace::SliderMidAnchorMode BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::__get__sliderMidAnchorMode() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SliderMidAnchorMode, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_colorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headLineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_headCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutDirection, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailLineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteLineLayer, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_tailCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::NoteCutDirection, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SliderMidAnchorMode BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::get_sliderMidAnchorMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::SliderMidAnchorMode, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "colorType", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType", modifiers: "", def_value: None }, CppParam { name: "headTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "headLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "headControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "headCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "tailTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailLineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tailLineLayer", ty: "GlobalNamespace::NoteLineLayer", modifiers: "", def_value: None }, CppParam { name: "tailControlPointLengthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "tailCutDirection", ty: "GlobalNamespace::NoteCutDirection", modifiers: "", def_value: None }, CppParam { name: "sliderMidAnchorMode", ty: "GlobalNamespace::SliderMidAnchorMode", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode)  : BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>(colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData::_ctor(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType colorType, float_t headTime, int32_t headLineIndex, GlobalNamespace::NoteLineLayer headLineLayer, float_t headControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection headCutDirection, float_t tailTime, int32_t tailLineIndex, GlobalNamespace::NoteLineLayer tailLineLayer, float_t tailControlPointLengthMultiplier, GlobalNamespace::NoteCutDirection tailCutDirection, GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bf38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData.get_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::*)(float_t, int32_t, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType, float_t, int32_t)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xd9bf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__set__time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__set__lineIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__set__type(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType>(value));
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__get__type() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__set__duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__set__width(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::__get__width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::get_width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData(float_t time, int32_t lineIndex, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width)  : BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>(time, lineIndex, type, duration, width))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData::_ctor(float_t time, int32_t lineIndex, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType type, float_t duration, int32_t width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, lineIndex, type, duration, width);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::FullHeight{0};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::Top{1};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleType::Free{2};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData.get_keywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::*)(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xd9bfbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::__set__keywords(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::__get__keywords() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::get_keywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "keywords", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> keywords)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>(keywords))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData::_ctor(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword> keywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keywords);
}
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword.get_keyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bfe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword.get_specialEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::get_specialEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9bfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            "get_specialEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::*)(::StringW, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xd9bff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::__set__keyword(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::__get__keyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::__set__specialEvents(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::__get__specialEvents() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::get_keyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::get_specialEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            "get_specialEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "keyword", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "specialEvents", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword(::StringW keyword, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> specialEvents)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>(keyword, specialEvents))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword::_ctor(::StringW keyword, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> specialEvents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventsForKeyword>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyword, specialEvents);
}
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_events
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_events",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_notes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_notes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_sliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_sliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_waypoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_waypoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_obstacles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_obstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_specialEventsKeywordFilters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_specialEventsKeywordFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xd9b820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.SerializeToJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SerializeToJSONString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd9b8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.DeserializeFromJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData (*)(::StringW)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xd98a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.ConvertBeatmapSaveDataPreV2_5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData)>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xd9b8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "ConvertBeatmapSaveDataPreV2_5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.GetSpecialEventTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::HashSet_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> (*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::GetSpecialEventTypes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xd9bc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "GetSpecialEventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__version(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__events(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__events() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__notes(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__notes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__sliders(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__sliders() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__waypoints(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__waypoints() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__obstacles(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>>(value));
}
constexpr System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__obstacles() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__specialEventsKeywordFilters(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData value)  {
::cordl_internals::setInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>(value));
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__specialEventsKeywordFilters() const {
return ::cordl_internals::getInstanceField<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kColorBoostEventType{5};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kLegacyBPMEventType{10};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kBPMEventType{100};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kEarlyRotationEventType{14};
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kLateRotationEventType{15};
 ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_events",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_notes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_sliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_waypoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_obstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "get_specialEventsKeywordFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "events", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>", modifiers: "", def_value: None }, CppParam { name: "notes", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>", modifiers: "", def_value: None }, CppParam { name: "sliders", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>", modifiers: "", def_value: None }, CppParam { name: "waypoints", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>", modifiers: "", def_value: None }, CppParam { name: "obstacles", ty: "System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>", modifiers: "", def_value: None }, CppParam { name: "specialEventsKeywordFilters", ty: "BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData", modifiers: "", def_value: None }]
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapSaveData(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> events, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> notes, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> sliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> waypoints, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> obstacles, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData specialEventsKeywordFilters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapSaveData>(events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters))) {}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor(System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData> events, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData> notes, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData> sliders, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData> waypoints, System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData> obstacles, BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData specialEventsKeywordFilters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__EventData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__NoteData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SliderData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__WaypointData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__ObstacleData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__SpecialEventKeywordFiltersData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters);
}
 ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SerializeToJSONString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::DeserializeFromJSONString(::StringW stringData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData, false>(nullptr, ___internal_method, stringData);
}
 void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData beatmapSaveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "ConvertBeatmapSaveDataPreV2_5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapSaveData);
}
 System::Collections::Generic::HashSet_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::GetSpecialEventTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData>::get(),
                            "GetSpecialEventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::HashSet_1<BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataVersion2_6_0AndEarlier__BeatmapSaveData__BeatmapEventType>, false>(nullptr, ___internal_method);
}
