#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__ILateDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: Zenject::Zenject__DisposableManager__DisposableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager__DisposableInfo::*)(System::IDisposable, int32_t)>(&Zenject::Zenject__DisposableManager__DisposableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d96324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__DisposableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Disposable", ty: "System::IDisposable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::Zenject__DisposableManager__DisposableInfo::Zenject__DisposableManager__DisposableInfo(System::IDisposable Disposable, int32_t Priority) noexcept : ::bs_hook::ValueTypeWrapper() {this->Disposable = Disposable;
this->Priority = Priority;
}
constexpr void Zenject::Zenject__DisposableManager__DisposableInfo::__set_Disposable(System::IDisposable value)  {
::cordl_internals::setInstanceField<System::IDisposable, 0x0>(this->__instance, std::forward<System::IDisposable>(value));
}
constexpr System::IDisposable Zenject::Zenject__DisposableManager__DisposableInfo::__get_Disposable() const {
return ::cordl_internals::getInstanceField<System::IDisposable, 0x0>(this->__instance);
}
constexpr void Zenject::Zenject__DisposableManager__DisposableInfo::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__DisposableManager__DisposableInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void Zenject::Zenject__DisposableManager__DisposableInfo::_ctor(System::IDisposable disposable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__DisposableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, disposable, priority);
}
//  Writing Method size for method: Zenject::Zenject__DisposableManager__LateDisposableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager__LateDisposableInfo::*)(Zenject::ILateDisposable, int32_t)>(&Zenject::Zenject__DisposableManager__LateDisposableInfo::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d96338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager__LateDisposableInfo.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__DisposableManager__LateDisposableInfo::__zenCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d974d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager__LateDisposableInfo.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__DisposableManager__LateDisposableInfo::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d975e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__DisposableManager__LateDisposableInfo::__set_LateDisposable(Zenject::ILateDisposable value)  {
::cordl_internals::setInstanceField<Zenject::ILateDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ILateDisposable>(value));
}
constexpr Zenject::ILateDisposable Zenject::Zenject__DisposableManager__LateDisposableInfo::__get_LateDisposable() const {
return ::cordl_internals::getInstanceField<Zenject::ILateDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__DisposableManager__LateDisposableInfo::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__DisposableManager__LateDisposableInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__DisposableManager__LateDisposableInfo Zenject::Zenject__DisposableManager__LateDisposableInfo::New_ctor(Zenject::ILateDisposable lateDisposable, int32_t priority)  {
Zenject::Zenject__DisposableManager__LateDisposableInfo o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__DisposableManager__LateDisposableInfo>(lateDisposable, priority))};
return o;
}
 void Zenject::Zenject__DisposableManager__LateDisposableInfo::_ctor(Zenject::ILateDisposable lateDisposable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lateDisposable, priority);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposableManager__LateDisposableInfo::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__DisposableManager__LateDisposableInfo::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager____c__DisplayClass4_0::*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9631c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_0.__ctor_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Zenject__DisposableManager____c__DisplayClass4_0::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d978e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d97968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d979c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__set_disposable(System::IDisposable value)  {
::cordl_internals::setInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IDisposable>(value));
}
constexpr System::IDisposable Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__get_disposable() const {
return ::cordl_internals::getInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__DisposableManager____c__DisplayClass4_0 Zenject::Zenject__DisposableManager____c__DisplayClass4_0::New_ctor()  {
Zenject::Zenject__DisposableManager____c__DisplayClass4_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>())};
return o;
}
 void Zenject::Zenject__DisposableManager____c__DisplayClass4_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__ctor_b__0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__DisposableManager____c__DisplayClass4_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager____c__DisplayClass4_1::*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d96330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_1.__ctor_b__2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Zenject__DisposableManager____c__DisplayClass4_1::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__ctor_b__2)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d97b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "<.ctor>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d97c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass4_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d97c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__set_lateDisposable(Zenject::ILateDisposable value)  {
::cordl_internals::setInstanceField<Zenject::ILateDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ILateDisposable>(value));
}
constexpr Zenject::ILateDisposable Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__get_lateDisposable() const {
return ::cordl_internals::getInstanceField<Zenject::ILateDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__DisposableManager____c__DisplayClass4_1 Zenject::Zenject__DisposableManager____c__DisplayClass4_1::New_ctor()  {
Zenject::Zenject__DisposableManager____c__DisplayClass4_1 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>())};
return o;
}
 void Zenject::Zenject__DisposableManager____c__DisplayClass4_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__ctor_b__2(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "<.ctor>b__2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__DisposableManager____c__DisplayClass4_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass4_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager____c::*)()>(&Zenject::Zenject__DisposableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d97e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c.__ctor_b__4_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int32_t> (Zenject::Zenject__DisposableManager____c::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__DisposableManager____c::__ctor_b__4_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d97e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<.ctor>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c.__ctor_b__4_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int32_t> (Zenject::Zenject__DisposableManager____c::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__DisposableManager____c::__ctor_b__4_3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d97eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<.ctor>b__4_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c._LateDispose_b__10_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Zenject__DisposableManager____c::*)(Zenject::Zenject__DisposableManager__LateDisposableInfo)>(&Zenject::Zenject__DisposableManager____c::_LateDispose_b__10_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d97f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<LateDispose>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c._Dispose_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Zenject__DisposableManager____c::*)(Zenject::Zenject__DisposableManager__DisposableInfo)>(&Zenject::Zenject__DisposableManager____c::_Dispose_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d97f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<Dispose>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__DisposableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__DisposableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d97f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__DisposableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d97fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__DisposableManager____c::__set___9(Zenject::Zenject__DisposableManager____c value)  {
::cordl_internals::setStaticField<Zenject::Zenject__DisposableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>(std::forward<Zenject::Zenject__DisposableManager____c>(value));
}
 Zenject::Zenject__DisposableManager____c Zenject::Zenject__DisposableManager____c::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__DisposableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>();
}
 void Zenject::Zenject__DisposableManager____c::__set___9__4_1(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>(std::forward<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>>(value));
}
 System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> Zenject::Zenject__DisposableManager____c::__get___9__4_1()  {
return ::cordl_internals::getStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__4_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>();
}
 void Zenject::Zenject__DisposableManager____c::__set___9__4_3(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__4_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>(std::forward<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>>(value));
}
 System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> Zenject::Zenject__DisposableManager____c::__get___9__4_3()  {
return ::cordl_internals::getStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__4_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>();
}
 void Zenject::Zenject__DisposableManager____c::__set___9__10_0(System::Func_2<Zenject::Zenject__DisposableManager__LateDisposableInfo,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__DisposableManager__LateDisposableInfo,int32_t>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>(std::forward<System::Func_2<Zenject::Zenject__DisposableManager__LateDisposableInfo,int32_t>>(value));
}
 System::Func_2<Zenject::Zenject__DisposableManager__LateDisposableInfo,int32_t> Zenject::Zenject__DisposableManager____c::__get___9__10_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__DisposableManager__LateDisposableInfo,int32_t>, "<>9__10_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>();
}
 void Zenject::Zenject__DisposableManager____c::__set___9__11_0(System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>(std::forward<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>>(value));
}
 System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t> Zenject::Zenject__DisposableManager____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__DisposableManager__DisposableInfo,int32_t>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get>();
}
 Zenject::Zenject__DisposableManager____c Zenject::Zenject__DisposableManager____c::New_ctor()  {
Zenject::Zenject__DisposableManager____c o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__DisposableManager____c>())};
return o;
}
 void Zenject::Zenject__DisposableManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Nullable_1<int32_t> Zenject::Zenject__DisposableManager____c::__ctor_b__4_1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<.ctor>b__4_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Nullable_1<int32_t> Zenject::Zenject__DisposableManager____c::__ctor_b__4_3(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<.ctor>b__4_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t Zenject::Zenject__DisposableManager____c::_LateDispose_b__10_0(Zenject::Zenject__DisposableManager__LateDisposableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<LateDispose>b__10_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__LateDisposableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 int32_t Zenject::Zenject__DisposableManager____c::_Dispose_b__11_0(Zenject::Zenject__DisposableManager__DisposableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "<Dispose>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__DisposableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposableManager____c::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__DisposableManager____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass9_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__DisposableManager____c__DisplayClass9_0::*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d96650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass9_0._Remove_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Zenject__DisposableManager____c__DisplayClass9_0::*)(Zenject::Zenject__DisposableManager__DisposableInfo)>(&Zenject::Zenject__DisposableManager____c__DisplayClass9_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d98188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "<Remove>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__DisposableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass9_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d98198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__DisposableManager____c__DisplayClass9_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d981f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__set_disposable(System::IDisposable value)  {
::cordl_internals::setInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IDisposable>(value));
}
constexpr System::IDisposable Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__get_disposable() const {
return ::cordl_internals::getInstanceField<System::IDisposable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__DisposableManager____c__DisplayClass9_0 Zenject::Zenject__DisposableManager____c__DisplayClass9_0::New_ctor()  {
Zenject::Zenject__DisposableManager____c__DisplayClass9_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>())};
return o;
}
 void Zenject::Zenject__DisposableManager____c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__DisposableManager____c__DisplayClass9_0::_Remove_b__0(Zenject::Zenject__DisposableManager__DisposableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "<Remove>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__DisposableManager__DisposableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__DisposableManager____c__DisplayClass9_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__DisposableManager____c__DisplayClass9_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::DisposableManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::Collections::Generic::List_1<System::IDisposable>, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>, System::Collections::Generic::List_1<Zenject::ILateDisposable>, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>)>(&Zenject::DisposableManager::_ctor)> {
  constexpr static std::size_t size = 0x830;
  constexpr static std::size_t addrs = 0x2d95aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::IDisposable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::ILateDisposable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable)>(&Zenject::DisposableManager::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d96368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable, int32_t)>(&Zenject::DisposableManager::Add)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d96370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.AddLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable)>(&Zenject::DisposableManager::AddLate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9642c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.AddLate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(Zenject::ILateDisposable, int32_t)>(&Zenject::DisposableManager::AddLate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d96434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)(System::IDisposable)>(&Zenject::DisposableManager::Remove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2d96524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.LateDispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::LateDispose)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x2d96658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "LateDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::DisposableManager::*)()>(&Zenject::DisposableManager::Dispose)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2d96ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::DisposableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2d96eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::DisposableManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::DisposableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x2d970b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  Zenject::DisposableManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DisposableManager::__set__disposables(System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__DisposableInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__DisposableInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__DisposableInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__DisposableInfo> Zenject::DisposableManager::__get__disposables() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__DisposableInfo>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DisposableManager::__set__lateDisposables(System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__LateDisposableInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__LateDisposableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__LateDisposableInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__LateDisposableInfo> Zenject::DisposableManager::__get__lateDisposables() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Zenject__DisposableManager__LateDisposableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DisposableManager::__set__disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::DisposableManager::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::DisposableManager::__set__lateDisposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::DisposableManager::__get__lateDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::DisposableManager Zenject::DisposableManager::New_ctor(System::Collections::Generic::List_1<System::IDisposable> disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable> lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> latePriorities)  {
Zenject::DisposableManager o{THROW_UNLESS(::il2cpp_utils::New<Zenject::DisposableManager>(disposables, priorities, lateDisposables, latePriorities))};
return o;
}
 void Zenject::DisposableManager::_ctor(System::Collections::Generic::List_1<System::IDisposable> disposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities, System::Collections::Generic::List_1<Zenject::ILateDisposable> lateDisposables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> latePriorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::IDisposable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::ILateDisposable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposables, priorities, lateDisposables, latePriorities);
}
 void Zenject::DisposableManager::Add(System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable);
}
 void Zenject::DisposableManager::Add(System::IDisposable disposable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable, priority);
}
 void Zenject::DisposableManager::AddLate(Zenject::ILateDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable);
}
 void Zenject::DisposableManager::AddLate(Zenject::ILateDisposable disposable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "AddLate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ILateDisposable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable, priority);
}
 void Zenject::DisposableManager::Remove(System::IDisposable disposable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IDisposable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposable);
}
 void Zenject::DisposableManager::LateDispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "LateDispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::DisposableManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::DisposableManager::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::DisposableManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DisposableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
