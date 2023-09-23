#pragma once
#include "UnityEngine/zzzz__GlobalJavaObjectRef_def.hpp"
//  Writing Method size for method: UnityEngine::GlobalJavaObjectRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)(::cordl_internals::intptr_t)>(&UnityEngine::GlobalJavaObjectRef::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b0e0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::GlobalJavaObjectRef.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b0e1c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::GlobalJavaObjectRef),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::GlobalJavaObjectRef.op_Implicit___cordl_internals__intptr_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(UnityEngine::GlobalJavaObjectRef)>(&UnityEngine::GlobalJavaObjectRef::op_Implicit___cordl_internals__intptr_t)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b0e2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GlobalJavaObjectRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::GlobalJavaObjectRef.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b0e25c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::GlobalJavaObjectRef::__set_m_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::GlobalJavaObjectRef::__get_m_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::GlobalJavaObjectRef::__set_m_jobject(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityEngine::GlobalJavaObjectRef::__get_m_jobject() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "jobject", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 UnityEngine::GlobalJavaObjectRef::GlobalJavaObjectRef(::cordl_internals::intptr_t jobject)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalJavaObjectRef>(jobject))) {}
 void UnityEngine::GlobalJavaObjectRef::_ctor(::cordl_internals::intptr_t jobject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, jobject);
}
 void UnityEngine::GlobalJavaObjectRef::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::cordl_internals::intptr_t UnityEngine::GlobalJavaObjectRef::op_Implicit___cordl_internals__intptr_t(UnityEngine::GlobalJavaObjectRef obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GlobalJavaObjectRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, obj);
}
 void UnityEngine::GlobalJavaObjectRef::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::GlobalJavaObjectRef>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
