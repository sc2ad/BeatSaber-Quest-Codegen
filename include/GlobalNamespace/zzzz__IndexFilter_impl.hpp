#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::GlobalNamespace__IndexFilter__IndexFilterRandomType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::NoRandom{0};
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::KeepOrder{1};
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType::RandomElements{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::None{0};
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::Duration{1};
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType  GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType::Distribution{2};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21dd850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21dd928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x21dd944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dde4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ValueTuple_3<int32_t,int32_t,int32_t> (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ddefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21ddf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21ddf4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::operator System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set___2__current(System::ValueTuple_3<int32_t,int32_t,int32_t> value)  {
::cordl_internals::setInstanceField<System::ValueTuple_3<int32_t,int32_t,int32_t>, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ValueTuple_3<int32_t,int32_t,int32_t>>(value));
}
constexpr System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::ValueTuple_3<int32_t,int32_t,int32_t>, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set___4__this(GlobalNamespace::IndexFilter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IndexFilter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IndexFilter>(value));
}
constexpr GlobalNamespace::IndexFilter GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IndexFilter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__shouldLimitDurationOrder_5__2(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__shouldLimitDurationOrder_5__2() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__shouldLimitDistributionOrder_5__3(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__shouldLimitDistributionOrder_5__3() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__limitedOrderIndex_5__4(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__limitedOrderIndex_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set___7__wrap4(System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>> GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get___7__wrap4() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<System::ValueTuple_2<int32_t,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__elementId_5__6(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__elementId_5__6() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__index_5__7(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__index_5__7() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__set__localChunkIndex_5__8(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__get__localChunkIndex_5__8() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::GlobalNamespace__IndexFilter___GetEnumerator_d__19(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IndexFilter___GetEnumerator_d__19>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ValueTuple_3<int32_t,int32_t,int32_t> GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_Generic_IEnumerator_(System_Int32element,System_Int32durationOrder,System_Int32distributionOrder)__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.Generic.IEnumerator<(System.Int32element,System.Int32durationOrder,System.Int32distributionOrder)>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ValueTuple_3<int32_t,int32_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetEnumerator_d__19>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21dd8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21ddfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21ddfb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_Collections_Generic_IEnumerator_System_Int32__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_Generic_IEnumerator_System_Int32__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21de034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.Generic.IEnumerator<System.Int32>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21de03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21de07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<int32_t> (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21de0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::*)()>(&GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21de17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<int32_t>
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::operator System::Collections::Generic::IEnumerable_1<int32_t>() const noexcept {
return System::Collections::Generic::IEnumerable_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<int32_t>
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::operator System::Collections::Generic::IEnumerator_1<int32_t>() const noexcept {
return System::Collections::Generic::IEnumerator_1<int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set___2__current(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get___2__current() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set___4__this(GlobalNamespace::IndexFilter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IndexFilter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IndexFilter>(value));
}
constexpr GlobalNamespace::IndexFilter GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IndexFilter, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set__value_5__2(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get__value_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__set__i_5__3(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::GlobalNamespace__IndexFilter___GetValues_d__20(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__IndexFilter___GetValues_d__20>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_Generic_IEnumerator_System_Int32__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.Generic.IEnumerator<System.Int32>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<int32_t> GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__IndexFilter___GetValues_d__20>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::IndexFilter.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter.get_VisibleCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::get_VisibleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_VisibleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter.get_limitAlsoAffectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::get_limitAlsoAffectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_limitAlsoAffectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IndexFilter::*)(int32_t, int32_t, int32_t, int32_t, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType, int32_t, int32_t, float_t, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType)>(&GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x21dd768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IndexFilter::*)(int32_t, int32_t, int32_t, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType, int32_t, int32_t, float_t, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType)>(&GlobalNamespace::IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x21db8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>> (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21db080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter.GetValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<int32_t> (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::GetValues)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21dd878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::IndexFilter.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::IndexFilter::*)()>(&GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21dd924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr  GlobalNamespace::IndexFilter::operator System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept {
return System::Collections::Generic::IReadOnlyCollection_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>
constexpr  GlobalNamespace::IndexFilter::operator System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::IndexFilter::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__random(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType GlobalNamespace::IndexFilter::__get__random() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__seed(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__seed() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__groupSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__groupSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__chunkSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__chunkSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__visibleCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__visibleCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__limitAlsoAffectType(GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter::__get__limitAlsoAffectType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__start(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__step(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__step() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::IndexFilter::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::IndexFilter::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::IndexFilter::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::IndexFilter::get_VisibleCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_VisibleCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType GlobalNamespace::IndexFilter::get_limitAlsoAffectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "get_limitAlsoAffectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "step", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "groupSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "limitAlsoAffectType", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType", modifiers: "", def_value: None }]
 GlobalNamespace::IndexFilter::IndexFilter(int32_t start, int32_t step, int32_t count, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IndexFilter>(start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType))) {}
 void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t step, int32_t count, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, step, count, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "groupSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "random", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType", modifiers: "", def_value: None }, CppParam { name: "seed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "chunkSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "limit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "limitAlsoAffectType", ty: "GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType", modifiers: "", def_value: None }]
 GlobalNamespace::IndexFilter::IndexFilter(int32_t start, int32_t end, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IndexFilter>(start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType))) {}
 void GlobalNamespace::IndexFilter::_ctor(int32_t start, int32_t end, int32_t groupSize, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType random, int32_t seed, int32_t chunkSize, float_t limit, GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType limitAlsoAffectType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__IndexFilter__IndexFilterLimitAlsoAffectType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, groupSize, random, seed, chunkSize, limit, limitAlsoAffectType);
}
 System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>> GlobalNamespace::IndexFilter::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::ValueTuple_3<int32_t,int32_t,int32_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<int32_t> GlobalNamespace::IndexFilter::GetValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "GetValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::IndexFilter::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IndexFilter>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
