#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType  ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType::BeatmapObject{0};
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType  ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType::BeatmapEvent{1};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd90ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_executionOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_executionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd90ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeGroupIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd90eb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapDataItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t, int32_t, int32_t, ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType)>(&::GlobalNamespace::BeatmapDataItem::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xd90eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::GetCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BeatmapDataItem),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::BeatmapDataItem)>(&::GlobalNamespace::BeatmapDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xd90f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem>
constexpr  ::GlobalNamespace::BeatmapDataItem::operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem>() const noexcept {
return ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataItem::__set__time_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BeatmapDataItem::__get__time_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataItem::__set__executionOrder_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BeatmapDataItem::__get__executionOrder_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataItem::__set_subtypeIdentifier(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BeatmapDataItem::__get_subtypeIdentifier() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BeatmapDataItem::__set_type(::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType ::GlobalNamespace::BeatmapDataItem::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::BeatmapDataItem::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::BeatmapDataItem::get_executionOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "get_subtypeGroupIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "executionOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subtypeIdentifier", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType", modifiers: "", def_value: None }]
 ::GlobalNamespace::BeatmapDataItem::BeatmapDataItem(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType type)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapDataItem>(time, executionOrder, subtypeIdentifier, type))) {}
 void ::GlobalNamespace::BeatmapDataItem::_ctor(float_t time, int32_t executionOrder, int32_t subtypeIdentifier, ::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapDataItem__BeatmapDataItemType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, executionOrder, subtypeIdentifier, type);
}
 ::GlobalNamespace::BeatmapDataItem ::GlobalNamespace::BeatmapDataItem::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::BeatmapDataItem::CompareTo(::GlobalNamespace::BeatmapDataItem b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, b);
}
} // end anonymous namespace
