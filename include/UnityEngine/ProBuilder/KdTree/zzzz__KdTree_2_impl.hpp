#pragma once
namespace {
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTree_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__AddDuplicateBehavior_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__HyperRect_1_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__NearestNeighbourList_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0._GetEnumerator_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_GetEnumerator_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            "<GetEnumerator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0._GetEnumerator_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_GetEnumerator_b__1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            "<GetEnumerator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::__set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::__get_left() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::__set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::__get_right() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>())) {}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            "<GetEnumerator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0::_GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>::get(),
                            "<GetEnumerator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>._GetEnumerator_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_GetEnumerator_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            "<GetEnumerator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>._GetEnumerator_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_GetEnumerator_b__1)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            "<GetEnumerator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::__set_left(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::__get_left() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::__set_right(::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>(value));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::__get_right() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0>())) {}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_GetEnumerator_b__0(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            "<GetEnumerator>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>::_GetEnumerator_b__1(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>::get(),
                            "<GetEnumerator>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)(int32_t)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33.System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set___8__1(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get___8__1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<TKey,TValue>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>(value));
}
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get__addLeft_5__2() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>(value));
}
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::__get__addRight_5__3() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>(__1__state))) {}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)(int32_t)>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>.System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>() const noexcept {
return ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::operator ::System::Collections::IEnumerator() const noexcept {
return ::System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::IDisposable
constexpr  ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set___2__current(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set___4__this(::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set___8__1(::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get___8__1() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2____c__DisplayClass33_0<float_t,int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set__addLeft_5__2(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>(value));
}
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get__addLeft_5__2() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__set__addRight_5__3(::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>(value));
}
constexpr ::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::__get__addRight_5__3() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33>(__1__state))) {}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_Generic_IEnumerator_UnityEngine_ProBuilder_KdTree_KdTreeNode_TKey,TValue___get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::____UnityEngine__ProBuilder__KdTree__KdTree_2___GetEnumerator_d__33<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(int32_t, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(int32_t, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.get_AddDuplicateBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::get_AddDuplicateBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "get_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.set_AddDuplicateBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::set_AddDuplicateBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "set_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>, TValue)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.ReadChildNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::ReadChildNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "ReadChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::RemoveAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.GetNearestNeighbours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::GetNearestNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.AddNearestNeighbours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, ::ArrayW<TKey>, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey>, int32_t, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>,TKey>, TKey)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNearestNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.RadialSearch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>, TKey, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::RadialSearch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.set_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::set_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.TryFindValueAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>, ByRef<TValue>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::TryFindValueAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.FindValueAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<TKey>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::FindValueAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.TryFindValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(TValue, ByRef<::ArrayW<TKey>>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::TryFindValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TKey>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.FindValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<TKey> (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(TValue)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::FindValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.AddNodeToStringBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, ::System::Text::StringBuilder, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodeToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodeToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::KdTree::KdTree_2),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.AddNodesToList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodesToList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodesToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.SortNodesArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::SortNodesArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "SortNodesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.AddNodesBalanced
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodesBalanced)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodesBalanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.Balance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::Balance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Balance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.RemoveChildNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::RemoveChildNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RemoveChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.SaveToFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)(::StringW)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::SaveToFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "SaveToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.LoadFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> (*)(::StringW)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::LoadFromFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "LoadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::ProBuilder::KdTree::KdTree_2::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2::operator ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>() const noexcept {
return ::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2::__set_dimensions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2::__get_dimensions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2::__set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> ::UnityEngine::ProBuilder::KdTree::KdTree_2::__get_typeMath() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2::__set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::KdTree_2::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2::__set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior ::UnityEngine::ProBuilder::KdTree::KdTree_2::__get__AddDuplicateBehavior_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2::__set__Count_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2::__get__Count_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::KdTree_2::KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KdTree_2>(dimensions, typeMath))) {}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dimensions, typeMath);
}
// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>", modifiers: "", def_value: None }, CppParam { name: "addDuplicateBehavior", ty: "::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::KdTree_2::KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KdTree_2>(dimensions, typeMath, addDuplicateBehavior))) {}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dimensions, typeMath, addDuplicateBehavior);
}
 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior ::UnityEngine::ProBuilder::KdTree::KdTree_2::get_AddDuplicateBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "get_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "set_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2::Add(::ArrayW<TKey> point, TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> removedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "ReadChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedNode);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::RemoveAt(::ArrayW<TKey> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point);
}
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::KdTree_2::GetNearestNeighbours(::ArrayW<TKey> point, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method, point, count);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::ArrayW<TKey> target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int32_t depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>,TKey> nearestNeighbours, TKey maxSearchRadiusSquared)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>,TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, target, rect, depth, nearestNeighbours, maxSearchRadiusSquared);
}
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::KdTree_2::RadialSearch(::ArrayW<TKey> center, TKey radius, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method, center, radius, count);
}
 int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::set_Count(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2::TryFindValueAt(::ArrayW<TKey> point, ByRef<TValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 TValue ::UnityEngine::ProBuilder::KdTree::KdTree_2::FindValueAt(::ArrayW<TKey> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, point);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2::TryFindValue(TValue value, ByRef<::ArrayW<TKey>> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TKey>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, point);
}
 ::ArrayW<TKey> ::UnityEngine::ProBuilder::KdTree::KdTree_2::FindValue(TValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey>, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::System::Text::StringBuilder sb, int32_t depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodeToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, sb, depth);
}
 ::StringW ::UnityEngine::ProBuilder::KdTree::KdTree_2::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodesToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, nodes);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "SortNodesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "AddNodesBalanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::Balance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Balance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "RemoveChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2::SaveToFile(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "SaveToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 ::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue> ::UnityEngine::ProBuilder::KdTree::KdTree_2::LoadFromFile(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "LoadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey,TValue>, false>(nullptr, ___internal_method, filename);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>> ::UnityEngine::ProBuilder::KdTree::KdTree_2::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::ProBuilder::KdTree::KdTree_2::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(int32_t, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(int32_t, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.get_AddDuplicateBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::get_AddDuplicateBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "get_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.set_AddDuplicateBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::set_AddDuplicateBehavior)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "set_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.ReadChildNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::ReadChildNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "ReadChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.RemoveAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RemoveAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.GetNearestNeighbours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::GetNearestNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.AddNearestNeighbours
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, ::ArrayW<float_t>, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t>, int32_t, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>,float_t>, float_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNearestNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.RadialSearch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>, float_t, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RadialSearch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::get_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.set_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::set_Count)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.TryFindValueAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>, ByRef<int32_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::TryFindValueAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.FindValueAt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<float_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::FindValueAt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.TryFindValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(int32_t, ByRef<::ArrayW<float_t>>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::TryFindValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.FindValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::FindValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.AddNodeToStringBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, ::System::Text::StringBuilder, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodeToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodeToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.AddNodesToList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodesToList)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodesToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.SortNodesArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::SortNodesArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "SortNodesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.AddNodesBalanced
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, int32_t, int32_t, int32_t)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodesBalanced)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodesBalanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.Balance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Balance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Balance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.RemoveChildNodes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RemoveChildNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RemoveChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.SaveToFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)(::StringW)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::SaveToFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "SaveToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.LoadFromFile
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> (*)(::StringW)>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::LoadFromFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "LoadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator (::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::*)()>(&::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::operator ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>() const noexcept {
return ::UnityEngine::ProBuilder::KdTree::IKdTree_2<float_t,int32_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>() const noexcept {
return ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr  ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::operator ::System::Collections::IEnumerable() const noexcept {
return ::System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__set_dimensions(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__get_dimensions() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__set_typeMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__get_typeMath() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__set_root(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__get_root() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__set__AddDuplicateBehavior_k__BackingField(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>(value));
}
constexpr ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__get__AddDuplicateBehavior_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__set__Count_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::__get__Count_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KdTree_2>(dimensions, typeMath))) {}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dimensions, typeMath);
}
// Ctor Parameters [CppParam { name: "dimensions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeMath", ty: "::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "addDuplicateBehavior", ty: "::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior", modifiers: "", def_value: None }]
 ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::KdTree_2(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<KdTree_2>(dimensions, typeMath, addDuplicateBehavior))) {}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::_ctor(int32_t dimensions, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t> typeMath, ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dimensions, typeMath, addDuplicateBehavior);
}
 ::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::get_AddDuplicateBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "get_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::set_AddDuplicateBehavior(::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "set_AddDuplicateBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Add(::ArrayW<float_t> point, int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::ReadChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> removedNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "ReadChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedNode);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RemoveAt(::ArrayW<float_t> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RemoveAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, point);
}
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::GetNearestNeighbours(::ArrayW<float_t> point, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "GetNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, false>(const_cast<void*>(instance), ___internal_method, point, count);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNearestNeighbours(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::ArrayW<float_t> target, ::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t> rect, int32_t depth, ::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>,float_t> nearestNeighbours, float_t maxSearchRadiusSquared)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNearestNeighbours",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::HyperRect_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, target, rect, depth, nearestNeighbours, maxSearchRadiusSquared);
}
 ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RadialSearch(::ArrayW<float_t> center, float_t radius, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RadialSearch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, false>(const_cast<void*>(instance), ___internal_method, center, radius, count);
}
 int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::set_Count(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "set_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::TryFindValueAt(::ArrayW<float_t> point, ByRef<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "TryFindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, point, value);
}
 int32_t ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::FindValueAt(::ArrayW<float_t> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "FindValueAt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, point);
}
 bool ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::TryFindValue(int32_t value, ByRef<::ArrayW<float_t>> point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "TryFindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, value, point);
}
 ::ArrayW<float_t> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::FindValue(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "FindValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodeToStringBuilder(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::System::Text::StringBuilder sb, int32_t depth)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodeToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, sb, depth);
}
 ::StringW ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodesToList(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodesToList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, nodes);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::SortNodesArray(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "SortNodesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::AddNodesBalanced(::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> nodes, int32_t byDimension, int32_t fromIndex, int32_t toIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "AddNodesBalanced",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, nodes, byDimension, fromIndex, toIndex);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Balance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Balance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::RemoveChildNodes(::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "RemoveChildNodes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::SaveToFile(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "SaveToFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, filename);
}
 ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::LoadFromFile(::StringW filename)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "LoadFromFile",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>, false>(nullptr, ___internal_method, filename);
}
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>> ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<float_t,int32_t>>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Collections::IEnumerator ::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::KdTree_2<float_t,int32_t>>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
