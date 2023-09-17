#pragma once
namespace {
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStateTable_3.GetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TState (::GlobalNamespace::IStateTable_3::*)(TType)>(&::GlobalNamespace::IStateTable_3::GetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStateTable_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStateTable_3.SetState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IStateTable_3::*)(TType, TState)>(&::GlobalNamespace::IStateTable_3::SetState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStateTable_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStateTable_3.GetDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TStateTable (::GlobalNamespace::IStateTable_3::*)(ByRef<TStateTable>)>(&::GlobalNamespace::IStateTable_3::GetDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStateTable_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStateTable_3.ApplyDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TStateTable (::GlobalNamespace::IStateTable_3::*)(ByRef<TStateTable>)>(&::GlobalNamespace::IStateTable_3::ApplyDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStateTable_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStateTable_3.GetSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::IStateTable_3::*)()>(&::GlobalNamespace::IStateTable_3::GetSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStateTable_3),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
 TState ::GlobalNamespace::IStateTable_3::GetState(TType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                            "GetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TState, false>(const_cast<void*>(instance), ___internal_method, type);
}
 void ::GlobalNamespace::IStateTable_3::SetState(TType type, TState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                            "SetState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, state);
}
 TStateTable ::GlobalNamespace::IStateTable_3::GetDelta(ByRef<TStateTable> stateTable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                            "GetDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TStateTable, false>(const_cast<void*>(instance), ___internal_method, stateTable);
}
 TStateTable ::GlobalNamespace::IStateTable_3::ApplyDelta(ByRef<TStateTable> delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                            "ApplyDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TStateTable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TStateTable, false>(const_cast<void*>(instance), ___internal_method, delta);
}
 int32_t ::GlobalNamespace::IStateTable_3::GetSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3>::get(),
                            "GetSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
