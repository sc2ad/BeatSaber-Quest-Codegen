#pragma once
#include "UnityEngine/ResourceManagement/Util/zzzz__IObjectInitializationDataProvider_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ObjectInitializationData_def.hpp"
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(&UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider.CreateObjectInitializationData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::*)()>(&UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::StringW UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::ResourceManagement::Util::ObjectInitializationData UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider::CreateObjectInitializationData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::ResourceManagement::Util::IObjectInitializationDataProvider>::get(),
                            "CreateObjectInitializationData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::ResourceManagement::Util::ObjectInitializationData, false>(const_cast<void*>(instance), ___internal_method);
}
