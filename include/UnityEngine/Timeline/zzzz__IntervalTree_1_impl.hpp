#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTreeNode_def.hpp"
// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "item", ty: "T", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::UnityEngine__Timeline__IntervalTree_1__Entry(int64_t intervalStart, int64_t intervalEnd, T item) noexcept : ::bs_hook::ValueTypeWrapper() {this->intervalStart = intervalStart;
this->intervalEnd = intervalEnd;
this->item = item;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__set_intervalStart(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__get_intervalStart() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__set_intervalEnd(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x8>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__get_intervalEnd() const {
return ::cordl_internals::getInstanceField<int64_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__set_item(T value)  {
::cordl_internals::setInstanceField<T, 0x10>(this->__instance, std::forward<T>(value));
}
constexpr T UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry::__get_item() const {
return ::cordl_internals::getInstanceField<T, 0x10>(this->__instance);
}
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.get_dirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::IntervalTree_1::*)()>(&UnityEngine::Timeline::IntervalTree_1::get_dirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "get_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.set_dirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(bool)>(&UnityEngine::Timeline::IntervalTree_1::set_dirty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "set_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(T)>(&UnityEngine::Timeline::IntervalTree_1::Add)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.IntersectsWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(int64_t, System::Collections::Generic::List_1<T>)>(&UnityEngine::Timeline::IntervalTree_1::IntersectsWith)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "IntersectsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.IntersectsWithRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(int64_t, int64_t, System::Collections::Generic::List_1<T>)>(&UnityEngine::Timeline::IntervalTree_1::IntersectsWithRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "IntersectsWithRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.UpdateIntervals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)()>(&UnityEngine::Timeline::IntervalTree_1::UpdateIntervals)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "UpdateIntervals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.Query
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(UnityEngine::Timeline::IntervalTreeNode, int64_t, System::Collections::Generic::List_1<T>)>(&UnityEngine::Timeline::IntervalTree_1::Query)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Query",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.QueryRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)(UnityEngine::Timeline::IntervalTreeNode, int64_t, int64_t, System::Collections::Generic::List_1<T>)>(&UnityEngine::Timeline::IntervalTree_1::QueryRange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "QueryRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)()>(&UnityEngine::Timeline::IntervalTree_1::Rebuild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::IntervalTree_1::*)(int32_t, int32_t)>(&UnityEngine::Timeline::IntervalTree_1::Rebuild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)()>(&UnityEngine::Timeline::IntervalTree_1::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::IntervalTree_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IntervalTree_1::*)()>(&UnityEngine::Timeline::IntervalTree_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Timeline::IntervalTree_1::__set_m_Entries(System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>> UnityEngine::Timeline::IntervalTree_1::__get_m_Entries() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::UnityEngine__Timeline__IntervalTree_1__Entry<T>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::IntervalTree_1::__set_m_Nodes(System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode> UnityEngine::Timeline::IntervalTree_1::__get_m_Nodes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::IntervalTreeNode>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::IntervalTree_1::__set__dirty_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Timeline::IntervalTree_1::__get__dirty_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool UnityEngine::Timeline::IntervalTree_1::get_dirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "get_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::IntervalTree_1::set_dirty(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "set_dirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Timeline::IntervalTree_1::Add(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void UnityEngine::Timeline::IntervalTree_1::IntersectsWith(int64_t value, System::Collections::Generic::List_1<T> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "IntersectsWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value, results);
}
 void UnityEngine::Timeline::IntervalTree_1::IntersectsWithRange(int64_t start, int64_t end, System::Collections::Generic::List_1<T> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "IntersectsWithRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, results);
}
 void UnityEngine::Timeline::IntervalTree_1::UpdateIntervals()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "UpdateIntervals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::IntervalTree_1::Query(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t value, System::Collections::Generic::List_1<T> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Query",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, intervalTreeNode, value, results);
}
 void UnityEngine::Timeline::IntervalTree_1::QueryRange(UnityEngine::Timeline::IntervalTreeNode intervalTreeNode, int64_t start, int64_t end, System::Collections::Generic::List_1<T> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "QueryRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IntervalTreeNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, intervalTreeNode, start, end, results);
}
 void UnityEngine::Timeline::IntervalTree_1::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::IntervalTree_1::Rebuild(int32_t start, int32_t end)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, start, end);
}
 void UnityEngine::Timeline::IntervalTree_1::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::Timeline::IntervalTree_1::IntervalTree_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<IntervalTree_1>())) {}
 void UnityEngine::Timeline::IntervalTree_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::IntervalTree_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
