#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Serialization/zzzz__FormerlySerializedAsAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Serialization::FormerlySerializedAsAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Serialization::FormerlySerializedAsAttribute::*)(::StringW)>(&UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b78cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Serialization::FormerlySerializedAsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Serialization::FormerlySerializedAsAttribute::__set_m_oldName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Serialization::FormerlySerializedAsAttribute::__get_m_oldName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Serialization::FormerlySerializedAsAttribute UnityEngine::Serialization::FormerlySerializedAsAttribute::New_ctor(::StringW oldName)  {
UnityEngine::Serialization::FormerlySerializedAsAttribute o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::Serialization::FormerlySerializedAsAttribute>(oldName))};
return o;
}
 void UnityEngine::Serialization::FormerlySerializedAsAttribute::_ctor(::StringW oldName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Serialization::FormerlySerializedAsAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldName);
}
