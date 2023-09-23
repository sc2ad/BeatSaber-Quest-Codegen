#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1.Acquire
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::LinkedListNode_1<T> (UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::*)(T)>(&UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Acquire)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1.Release
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::*)(System::Collections::Generic::LinkedListNode_1<T>)>(&UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1.get_CreatedNodeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::*)()>(&UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CreatedNodeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "get_CreatedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1.get_CachedNodeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::*)()>(&UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CachedNodeCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "get_CachedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::*)()>(&UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::__set_m_NodesCreated(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::__get_m_NodesCreated() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::__set_m_NodeCache(System::Collections::Generic::LinkedList_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<T>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<T> UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::__get_m_NodeCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::LinkedListNode_1<T> UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Acquire(T val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "Acquire",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::LinkedListNode_1<T>, false>(const_cast<void*>(instance), ___internal_method, val);
}
 void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::Release(System::Collections::Generic::LinkedListNode_1<T> node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "Release",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::LinkedListNode_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CreatedNodeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "get_CreatedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::get_CachedNodeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            "get_CachedNodeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::LinkedListNodeCache_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LinkedListNodeCache_1>())) {}
 void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
