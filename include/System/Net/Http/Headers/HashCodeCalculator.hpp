// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.HashCodeCalculator
  class HashCodeCalculator : public ::Il2CppObject {
    public:
    // static public System.Int32 Calculate(System.Collections.Generic.ICollection`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int Calculate(System::Collections::Generic::ICollection_1<T>* list) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("System.Net.Http.Headers", "HashCodeCalculator", "Calculate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list)));
    }
  }; // System.Net.Http.Headers.HashCodeCalculator
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HashCodeCalculator*, "System.Net.Http.Headers", "HashCodeCalculator");
#pragma pack(pop)