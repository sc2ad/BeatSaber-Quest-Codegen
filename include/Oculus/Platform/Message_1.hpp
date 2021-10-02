// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Callback because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Message`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class Message_1 : public Oculus::Platform::Message {
    public:
    // Nested type: Oculus::Platform::Message_1::Callback<T>
    class Callback;
    // WARNING Size may be invalid!
    // Autogenerated type: Oculus.Platform.Message`1/Oculus.Platform.Callback
    // [TokenAttribute] Offset: FFFFFFFF
    class Callback : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = Message_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Callback";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Message_1<T>::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Message_1<T>::Callback*, creationType>(object, method)));
      }
      // public System.Void Invoke(Oculus.Platform.Message`1<T> message)
      // Offset: 0xFFFFFFFF
      void Invoke(Oculus::Platform::Message_1<T>* message) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::Invoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, message);
      }
      // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message`1<T> message, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(Oculus::Platform::Message_1<T>* message, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(callback), ::il2cpp_utils::ExtractType(object)})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(___instance_arg, ___internal__method, message, callback, object);
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      void EndInvoke(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::EndInvoke");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, result);
      }
    }; // Oculus.Platform.Message`1/Oculus.Platform.Callback
    // Could not write size check! Type: Oculus.Platform.Message`1/Oculus.Platform.Callback is generic, or has no fields that are valid for size checks!
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private T data
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T data;
    public:
    // Autogenerated instance field getter
    // Get instance field: private T data
    T& dyn_data() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::dyn_data");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "data"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T get_Data()
    // Offset: 0xFFFFFFFF
    T get_Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::get_Data");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Data", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // protected T GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    T GetDataFromMessage(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::GetDataFromMessage");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetDataFromMessage", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(c_message)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method, c_message);
    }
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Message_1<T>* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Message_1<T>*, creationType>(c_message)));
    }
  }; // Oculus.Platform.Message`1
  // Could not write size check! Type: Oculus.Platform.Message`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
