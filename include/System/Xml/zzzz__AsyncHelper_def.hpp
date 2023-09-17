#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Xml {
class AsyncHelper;
}
// Type: System.Xml::AsyncHelper
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11345))
// CS Name: System.Xml.AsyncHelper
class CORDL_TYPE AsyncHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsyncHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: " const&", def_value: None }]
constexpr AsyncHelper(AsyncHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncHelper", modifiers: "&&", def_value: None }]
constexpr AsyncHelper(AsyncHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncHelper& operator=(AsyncHelper&& o) noexcept = default;
  constexpr AsyncHelper& operator=(AsyncHelper const& o) noexcept = default;
                


// Fields

static ::System::Threading::Tasks::Task __declspec(property(get=__get_DoneTask, put=__set_DoneTask))  DoneTask;

static void __set_DoneTask(::System::Threading::Tasks::Task value) ;

static ::System::Threading::Tasks::Task __get_DoneTask() ;

static ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_DoneTaskTrue, put=__set_DoneTaskTrue))  DoneTaskTrue;

static void __set_DoneTaskTrue(::System::Threading::Tasks::Task_1<bool> value) ;

static ::System::Threading::Tasks::Task_1<bool> __get_DoneTaskTrue() ;

static ::System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_DoneTaskFalse, put=__set_DoneTaskFalse))  DoneTaskFalse;

static void __set_DoneTaskFalse(::System::Threading::Tasks::Task_1<bool> value) ;

static ::System::Threading::Tasks::Task_1<bool> __get_DoneTaskFalse() ;

static ::System::Threading::Tasks::Task_1<int32_t> __declspec(property(get=__get_DoneTaskZero, put=__set_DoneTaskZero))  DoneTaskZero;

static void __set_DoneTaskZero(::System::Threading::Tasks::Task_1<int32_t> value) ;

static ::System::Threading::Tasks::Task_1<int32_t> __get_DoneTaskZero() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::AsyncHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AsyncHelper, "System.Xml", "AsyncHelper");
