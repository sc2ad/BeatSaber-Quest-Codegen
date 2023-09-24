#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__GridView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__IDataSource.GetNumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__GridView__IDataSource::*)()>(&GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetNumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__GridView__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__IDataSource.GetCellWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__GridView__IDataSource::*)()>(&GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetCellWidth)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__GridView__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__IDataSource.GetCellHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__GridView__IDataSource::*)()>(&GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetCellHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__GridView__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__IDataSource.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MonoBehaviour (GlobalNamespace::GlobalNamespace__GridView__IDataSource::*)(GlobalNamespace::GridView, int32_t)>(&GlobalNamespace::GlobalNamespace__GridView__IDataSource::CellForIdx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::GlobalNamespace__GridView__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 int32_t GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetNumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                            "GetNumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetCellWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                            "GetCellWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__GridView__IDataSource::GetCellHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                            "GetCellHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::MonoBehaviour GlobalNamespace::GlobalNamespace__GridView__IDataSource::CellForIdx(GlobalNamespace::GridView gridView, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GridView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MonoBehaviour, false>(const_cast<void*>(instance), ___internal_method, gridView, idx);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2188d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2188db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2188e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2189170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2189120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::MonoBehaviour (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21891c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21891c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2189208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>
constexpr  GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::operator System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__set___2__current(UnityEngine::MonoBehaviour value)  {
::cordl_internals::setInstanceField<UnityEngine::MonoBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MonoBehaviour>(value));
}
constexpr UnityEngine::MonoBehaviour GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::MonoBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__set___4__this(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__set___7__wrap1(GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>>(value));
}
constexpr GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::System__Collections__Generic__Dictionary_2__KeyCollection__Enumerator<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__set___7__wrap2(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour> GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::MonoBehaviour>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::MonoBehaviour GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::MonoBehaviour, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator___GetEnumerator_d__1>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour> (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2188d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::*)()>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2188db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::*)(GlobalNamespace::GridView)>(&GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21883e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GridView>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour>
constexpr  GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::operator System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::__set__gridView(GlobalNamespace::GridView value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GridView, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GridView>(value));
}
constexpr GlobalNamespace::GridView GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::__get__gridView() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GridView, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour> GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::MonoBehaviour>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::New_ctor(GlobalNamespace::GridView gridView)  {
GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>(gridView))};
return o;
}
 void GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator::_ctor(GlobalNamespace::GridView gridView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GridView>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gridView);
}
//  Writing Method size for method: GlobalNamespace::GridView.get_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__GridView__IDataSource (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.get_cellsEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_cellsEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_cellsEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.set_cellsEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator)>(&GlobalNamespace::GridView::set_cellsEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "set_cellsEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.get_rowCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_rowCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_rowCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.get_columnCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::get_columnCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2188340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_columnCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.SetDataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)(GlobalNamespace::GlobalNamespace__GridView__IDataSource, bool)>(&GlobalNamespace::GridView::SetDataSource)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2188348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "SetDataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.ReloadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::ReloadData)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x2188408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView.GetActiveCellsForIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> (GlobalNamespace::GridView::*)(UnityEngine::MonoBehaviour)>(&GlobalNamespace::GridView::GetActiveCellsForIdentifier)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2188b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "GetActiveCellsForIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MonoBehaviour>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GridView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GridView::*)()>(&GlobalNamespace::GridView::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2188c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GridView::__set__contentTransform(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform GlobalNamespace::GridView::__get__contentTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__cellsEnumerator_k__BackingField(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator GlobalNamespace::GridView::__get__cellsEnumerator_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__dataSource(GlobalNamespace::GlobalNamespace__GridView__IDataSource value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GridView__IDataSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GridView__IDataSource>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GridView__IDataSource GlobalNamespace::GridView::__get__dataSource() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GridView__IDataSource, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__columnCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GridView::__get__columnCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__rowCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GridView::__get__rowCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__availableCellsPerPrefabDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>> GlobalNamespace::GridView::__get__availableCellsPerPrefabDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::Queue_1<UnityEngine::MonoBehaviour>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GridView::__set__spawnedCellsPerPrefabDictionary(System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>> GlobalNamespace::GridView::__get__spawnedCellsPerPrefabDictionary() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::MonoBehaviour,System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__GridView__IDataSource GlobalNamespace::GridView::get_dataSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__GridView__IDataSource, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator GlobalNamespace::GridView::get_cellsEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_cellsEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GridView::set_cellsEnumerator(GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "set_cellsEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GridView__GridViewCellsEnumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t GlobalNamespace::GridView::get_rowCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_rowCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GridView::get_columnCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "get_columnCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GridView::SetDataSource(GlobalNamespace::GlobalNamespace__GridView__IDataSource newDataSource, bool reloadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "SetDataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GridView__IDataSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newDataSource, reloadData);
}
 void GlobalNamespace::GridView::ReloadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> GlobalNamespace::GridView::GetActiveCellsForIdentifier(UnityEngine::MonoBehaviour prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            "GetActiveCellsForIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MonoBehaviour>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::MonoBehaviour>, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
template<typename T>
 T GlobalNamespace::GridView::GetReusableCellView(UnityEngine::MonoBehaviour prefab)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                        "GetReusableCellView",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::MonoBehaviour>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 GlobalNamespace::GridView GlobalNamespace::GridView::New_ctor()  {
GlobalNamespace::GridView o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GridView>())};
return o;
}
 void GlobalNamespace::GridView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GridView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
