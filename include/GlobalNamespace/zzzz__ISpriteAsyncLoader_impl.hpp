#pragma once
#include "GlobalNamespace/zzzz__ISpriteAsyncLoader_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::ISpriteAsyncLoader.LoadSpriteAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<UnityEngine::Sprite> (GlobalNamespace::ISpriteAsyncLoader::*)(::StringW, System::Threading::CancellationToken)>(&GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISpriteAsyncLoader),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISpriteAsyncLoader>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> GlobalNamespace::ISpriteAsyncLoader::LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISpriteAsyncLoader>::get(),
                            "LoadSpriteAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<UnityEngine::Sprite>, false>(const_cast<void*>(instance), ___internal_method, path, cancellationToken);
}
