#pragma once
#include "GlobalNamespace/zzzz__CommandBufferOwners_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: GlobalNamespace::CommandBufferOwners.AddOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CommandBufferOwners::*)(UnityEngine::Object)>(&GlobalNamespace::CommandBufferOwners::AddOwner)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2675ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "AddOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferOwners.RemoveOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CommandBufferOwners::*)(UnityEngine::Object)>(&GlobalNamespace::CommandBufferOwners::RemoveOwner)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2675c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "RemoveOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferOwners.ContainsOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CommandBufferOwners::*)(UnityEngine::Object)>(&GlobalNamespace::CommandBufferOwners::ContainsOwner)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2675e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "ContainsOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferOwners.get_NumberOfOwners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::CommandBufferOwners::*)()>(&GlobalNamespace::CommandBufferOwners::get_NumberOfOwners)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2675c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "get_NumberOfOwners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CommandBufferOwners._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CommandBufferOwners::*)()>(&GlobalNamespace::CommandBufferOwners::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2675f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CommandBufferOwners::__set__owners(System::Collections::Generic::HashSet_1<UnityEngine::Object> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::Object>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::Object>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::Object> GlobalNamespace::CommandBufferOwners::__get__owners() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::Object>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CommandBufferOwners::__set_commandBuffer(UnityEngine::Rendering::CommandBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::CommandBuffer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Rendering::CommandBuffer>(value));
}
constexpr UnityEngine::Rendering::CommandBuffer GlobalNamespace::CommandBufferOwners::__get_commandBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::CommandBuffer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CommandBufferOwners::AddOwner(UnityEngine::Object owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "AddOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, owner);
}
 void GlobalNamespace::CommandBufferOwners::RemoveOwner(UnityEngine::Object owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "RemoveOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, owner);
}
 bool GlobalNamespace::CommandBufferOwners::ContainsOwner(UnityEngine::Object owner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "ContainsOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, owner);
}
 int32_t GlobalNamespace::CommandBufferOwners::get_NumberOfOwners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            "get_NumberOfOwners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::CommandBufferOwners::CommandBufferOwners()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CommandBufferOwners>())) {}
 void GlobalNamespace::CommandBufferOwners::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CommandBufferOwners>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
