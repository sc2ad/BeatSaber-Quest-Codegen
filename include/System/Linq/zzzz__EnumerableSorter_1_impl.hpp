#pragma once
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphPairAdjustmentRecord_def.hpp"
#include "Zenject/zzzz__DisposableManager_def.hpp"
#include "Zenject/zzzz__PoolableManager_def.hpp"
//  Writing Method size for method: System::Linq::EnumerableSorter_1.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1::*)(::ArrayW<TElement>, int32_t)>(&System::Linq::EnumerableSorter_1::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1::*)(::ArrayW<TElement>, int32_t)>(&System::Linq::EnumerableSorter_1::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1::*)()>(&System::Linq::EnumerableSorter_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1::ComputeKeys(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1::Sort(::ArrayW<TElement> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<int32_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<int32_t>::*)(::ArrayW<int32_t>, int32_t)>(&System::Linq::EnumerableSorter_1<int32_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<int32_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<int32_t>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<int32_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<int32_t>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<int32_t>::*)(::ArrayW<int32_t>, int32_t)>(&System::Linq::EnumerableSorter_1<int32_t>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<int32_t>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<int32_t>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<int32_t>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<int32_t>::*)()>(&System::Linq::EnumerableSorter_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<int32_t>::ComputeKeys(::ArrayW<int32_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<int32_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<int32_t>::Sort(::ArrayW<int32_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<int32_t>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<int32_t>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::*)()>(&System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::ComputeKeys(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::Sort(::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<float_t>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<float_t>::*)(::ArrayW<float_t>, int32_t)>(&System::Linq::EnumerableSorter_1<float_t>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<float_t>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<float_t>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<float_t>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<float_t>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<float_t>::*)(::ArrayW<float_t>, int32_t)>(&System::Linq::EnumerableSorter_1<float_t>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<float_t>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<float_t>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<float_t>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<float_t>::*)()>(&System::Linq::EnumerableSorter_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<float_t>::ComputeKeys(::ArrayW<float_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<float_t>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<float_t>::Sort(::ArrayW<float_t> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<float_t>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<float_t>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<float_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::*)()>(&System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::ComputeKeys(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::Sort(::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::*)(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::*)(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::*)()>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::ComputeKeys(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::Sort(::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__DisposableManager__DisposableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::*)(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::*)(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::*)()>(&System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::ComputeKeys(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::Sort(::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<Zenject::Zenject__PoolableManager__PoolableInfo>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>.ComputeKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::*)(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, int32_t)>(&System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::ComputeKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>.CompareKeys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::*)(int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::CompareKeys)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>.Sort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::*)(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>, int32_t)>(&System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::Sort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>.QuickSort
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::*)(::ArrayW<int32_t>, int32_t, int32_t)>(&System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::QuickSort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::*)()>(&System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::ComputeKeys(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "ComputeKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 int32_t System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::CompareKeys(int32_t index1, int32_t index2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "CompareKeys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, index1, index2);
}
 ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::Sort(::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>> elements, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "Sort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method, elements, count);
}
 void System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            "QuickSort",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, map, left, right);
}
// Ctor Parameters []
 System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::EnumerableSorter_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<EnumerableSorter_1>())) {}
 void System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Linq::EnumerableSorter_1<System::Collections::Generic::KeyValuePair_2<int32_t,::bs_hook::Il2CppWrapperType>>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
