#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
#include "ModestTree/Util/zzzz__ValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__IPoolable_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: Zenject::Zenject__PoolableManager__PoolableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PoolableManager__PoolableInfo::*)(Zenject::IPoolable, int32_t)>(&Zenject::Zenject__PoolableManager__PoolableInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d9de14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager__PoolableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Poolable", ty: "Zenject::IPoolable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Priority", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::Zenject__PoolableManager__PoolableInfo::Zenject__PoolableManager__PoolableInfo(Zenject::IPoolable Poolable, int32_t Priority) noexcept : ::bs_hook::ValueTypeWrapper() {this->Poolable = Poolable;
this->Priority = Priority;
}
constexpr void Zenject::Zenject__PoolableManager__PoolableInfo::__set_Poolable(Zenject::IPoolable value)  {
::cordl_internals::setInstanceField<Zenject::IPoolable, 0x0>(this->__instance, std::forward<Zenject::IPoolable>(value));
}
constexpr Zenject::IPoolable Zenject::Zenject__PoolableManager__PoolableInfo::__get_Poolable() const {
return ::cordl_internals::getInstanceField<Zenject::IPoolable, 0x0>(this->__instance);
}
constexpr void Zenject::Zenject__PoolableManager__PoolableInfo::__set_Priority(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::Zenject__PoolableManager__PoolableInfo::__get_Priority() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void Zenject::Zenject__PoolableManager__PoolableInfo::_ctor(Zenject::IPoolable poolable, int32_t priority)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager__PoolableInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, poolable, priority);
}
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass2_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PoolableManager____c__DisplayClass2_0::*)()>(&Zenject::Zenject__PoolableManager____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9dbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass2_0.__ctor_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Zenject__PoolableManager__PoolableInfo (Zenject::Zenject__PoolableManager____c__DisplayClass2_0::*)(Zenject::IPoolable)>(&Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d9e468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass2_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9e484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass2_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d9e4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__set___4__this(Zenject::PoolableManager value)  {
::cordl_internals::setInstanceField<Zenject::PoolableManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::PoolableManager>(value));
}
constexpr Zenject::PoolableManager Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::PoolableManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__set_priorities(System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>(value));
}
constexpr System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__get_priorities() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__PoolableManager____c__DisplayClass2_0 Zenject::Zenject__PoolableManager____c__DisplayClass2_0::New_ctor()  {
Zenject::Zenject__PoolableManager____c__DisplayClass2_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>())};
return o;
}
 void Zenject::Zenject__PoolableManager____c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::Zenject__PoolableManager__PoolableInfo Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__ctor_b__0(Zenject::IPoolable x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "<.ctor>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Zenject__PoolableManager__PoolableInfo, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PoolableManager____c__DisplayClass2_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass2_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PoolableManager____c::*)()>(&Zenject::Zenject__PoolableManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9e704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c.__ctor_b__2_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Zenject::Zenject__PoolableManager____c::*)(Zenject::Zenject__PoolableManager__PoolableInfo)>(&Zenject::Zenject__PoolableManager____c::__ctor_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9e70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<.ctor>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__PoolableManager__PoolableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c.__ctor_b__2_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IPoolable (Zenject::Zenject__PoolableManager____c::*)(Zenject::Zenject__PoolableManager__PoolableInfo)>(&Zenject::Zenject__PoolableManager____c::__ctor_b__2_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9e714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<.ctor>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__PoolableManager__PoolableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c._CreatePoolableInfo_b__3_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<int32_t> (Zenject::Zenject__PoolableManager____c::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__PoolableManager____c::_CreatePoolableInfo_b__3_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d9e71c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<CreatePoolableInfo>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PoolableManager____c::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9e77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PoolableManager____c::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d9e7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__PoolableManager____c::__set___9(Zenject::Zenject__PoolableManager____c value)  {
::cordl_internals::setStaticField<Zenject::Zenject__PoolableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>(std::forward<Zenject::Zenject__PoolableManager____c>(value));
}
 Zenject::Zenject__PoolableManager____c Zenject::Zenject__PoolableManager____c::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__PoolableManager____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>();
}
 void Zenject::Zenject__PoolableManager____c::__set___9__2_1(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>(std::forward<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>>(value));
}
 System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t> Zenject::Zenject__PoolableManager____c::__get___9__2_1()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,int32_t>, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>();
}
 void Zenject::Zenject__PoolableManager____c::__set___9__2_2(System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable>, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>(std::forward<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable>>(value));
}
 System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable> Zenject::Zenject__PoolableManager____c::__get___9__2_2()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__PoolableManager__PoolableInfo,Zenject::IPoolable>, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>();
}
 void Zenject::Zenject__PoolableManager____c::__set___9__3_1(System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> value)  {
::cordl_internals::setStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>(std::forward<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>>(value));
}
 System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>> Zenject::Zenject__PoolableManager____c::__get___9__3_1()  {
return ::cordl_internals::getStaticField<System::Func_2<ModestTree::Util::ValuePair_2<System::Type,int32_t>,System::Nullable_1<int32_t>>, "<>9__3_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get>();
}
 Zenject::Zenject__PoolableManager____c Zenject::Zenject__PoolableManager____c::New_ctor()  {
Zenject::Zenject__PoolableManager____c o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__PoolableManager____c>())};
return o;
}
 void Zenject::Zenject__PoolableManager____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Zenject::Zenject__PoolableManager____c::__ctor_b__2_1(Zenject::Zenject__PoolableManager__PoolableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<.ctor>b__2_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__PoolableManager__PoolableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, x);
}
 Zenject::IPoolable Zenject::Zenject__PoolableManager____c::__ctor_b__2_2(Zenject::Zenject__PoolableManager__PoolableInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<.ctor>b__2_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__PoolableManager__PoolableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IPoolable, false>(const_cast<void*>(instance), ___internal_method, x);
}
 System::Nullable_1<int32_t> Zenject::Zenject__PoolableManager____c::_CreatePoolableInfo_b__3_1(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "<CreatePoolableInfo>b__3_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<int32_t>, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PoolableManager____c::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PoolableManager____c::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass3_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PoolableManager____c__DisplayClass3_0::*)()>(&Zenject::Zenject__PoolableManager____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9de0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass3_0._CreatePoolableInfo_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Zenject__PoolableManager____c__DisplayClass3_0::*)(ModestTree::Util::ValuePair_2<System::Type,int32_t>)>(&Zenject::Zenject__PoolableManager____c__DisplayClass3_0::_CreatePoolableInfo_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d9e998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "<CreatePoolableInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass3_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9ea18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PoolableManager____c__DisplayClass3_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d9ea74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__set_poolable(Zenject::IPoolable value)  {
::cordl_internals::setInstanceField<Zenject::IPoolable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IPoolable>(value));
}
constexpr Zenject::IPoolable Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__get_poolable() const {
return ::cordl_internals::getInstanceField<Zenject::IPoolable, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__PoolableManager____c__DisplayClass3_0 Zenject::Zenject__PoolableManager____c__DisplayClass3_0::New_ctor()  {
Zenject::Zenject__PoolableManager____c__DisplayClass3_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>())};
return o;
}
 void Zenject::Zenject__PoolableManager____c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::Zenject__PoolableManager____c__DisplayClass3_0::_CreatePoolableInfo_b__0(ModestTree::Util::ValuePair_2<System::Type,int32_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "<CreatePoolableInfo>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ModestTree::Util::ValuePair_2<System::Type,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PoolableManager____c__DisplayClass3_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PoolableManager____c__DisplayClass3_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::PoolableManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableManager::*)(System::Collections::Generic::List_1<Zenject::IPoolable>, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>)>(&Zenject::PoolableManager::_ctor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2d9d948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IPoolable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableManager.CreatePoolableInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::Zenject__PoolableManager__PoolableInfo (Zenject::PoolableManager::*)(Zenject::IPoolable, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>)>(&Zenject::PoolableManager::CreatePoolableInfo)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2d9dbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "CreatePoolableInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableManager.TriggerOnSpawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableManager::*)()>(&Zenject::PoolableManager::TriggerOnSpawned)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d9de20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "TriggerOnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableManager.TriggerOnDespawned
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolableManager::*)()>(&Zenject::PoolableManager::TriggerOnDespawned)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d9df3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "TriggerOnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableManager.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::PoolableManager::__zenCreate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d9e048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PoolableManager.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::PoolableManager::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d9e164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::PoolableManager::__set__poolables(System::Collections::Generic::List_1<Zenject::IPoolable> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::IPoolable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::IPoolable>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::IPoolable> Zenject::PoolableManager::__get__poolables() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::IPoolable>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PoolableManager::__set__isSpawned(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::PoolableManager::__get__isSpawned() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::PoolableManager Zenject::PoolableManager::New_ctor(System::Collections::Generic::List_1<Zenject::IPoolable> poolables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities)  {
Zenject::PoolableManager o{THROW_UNLESS(::il2cpp_utils::New<Zenject::PoolableManager>(poolables, priorities))};
return o;
}
 void Zenject::PoolableManager::_ctor(System::Collections::Generic::List_1<Zenject::IPoolable> poolables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::IPoolable>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, poolables, priorities);
}
 Zenject::Zenject__PoolableManager__PoolableInfo Zenject::PoolableManager::CreatePoolableInfo(Zenject::IPoolable poolable, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>> priorities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "CreatePoolableInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IPoolable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::Zenject__PoolableManager__PoolableInfo, false>(const_cast<void*>(instance), ___internal_method, poolable, priorities);
}
 void Zenject::PoolableManager::TriggerOnSpawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "TriggerOnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::PoolableManager::TriggerOnDespawned()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "TriggerOnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::PoolableManager::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::PoolableManager::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolableManager>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
