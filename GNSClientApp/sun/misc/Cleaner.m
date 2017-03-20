//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./java_dependencies/sun/misc/Cleaner.java
//

#include "J2ObjC_source.h"
#include "java/lang/Error.h"
#include "java/lang/Runnable.h"
#include "java/lang/System.h"
#include "java/lang/Void.h"
#include "java/lang/ref/PhantomReference.h"
#include "java/lang/ref/ReferenceQueue.h"
#include "java/security/AccessController.h"
#include "java/security/PrivilegedAction.h"
#include "sun/misc/Cleaner.h"

@interface SunMiscCleaner () {
 @public
  SunMiscCleaner *next_, *prev_;
  id<JavaLangRunnable> thunk_;
}

+ (SunMiscCleaner *)addWithSunMiscCleaner:(SunMiscCleaner *)cl;

+ (jboolean)removeWithSunMiscCleaner:(SunMiscCleaner *)cl;

- (instancetype)initWithId:(id)referent
      withJavaLangRunnable:(id<JavaLangRunnable>)thunk;

@end

J2OBJC_FIELD_SETTER(SunMiscCleaner, next_, SunMiscCleaner *)
J2OBJC_FIELD_SETTER(SunMiscCleaner, prev_, SunMiscCleaner *)
J2OBJC_FIELD_SETTER(SunMiscCleaner, thunk_, id<JavaLangRunnable>)

inline JavaLangRefReferenceQueue *SunMiscCleaner_get_dummyQueue();
static JavaLangRefReferenceQueue *SunMiscCleaner_dummyQueue;
J2OBJC_STATIC_FIELD_OBJ_FINAL(SunMiscCleaner, dummyQueue, JavaLangRefReferenceQueue *)

inline SunMiscCleaner *SunMiscCleaner_get_first();
inline SunMiscCleaner *SunMiscCleaner_set_first(SunMiscCleaner *value);
static SunMiscCleaner *SunMiscCleaner_first;
J2OBJC_STATIC_FIELD_OBJ(SunMiscCleaner, first, SunMiscCleaner *)

__attribute__((unused)) static SunMiscCleaner *SunMiscCleaner_addWithSunMiscCleaner_(SunMiscCleaner *cl);

__attribute__((unused)) static jboolean SunMiscCleaner_removeWithSunMiscCleaner_(SunMiscCleaner *cl);

__attribute__((unused)) static void SunMiscCleaner_initWithId_withJavaLangRunnable_(SunMiscCleaner *self, id referent, id<JavaLangRunnable> thunk);

__attribute__((unused)) static SunMiscCleaner *new_SunMiscCleaner_initWithId_withJavaLangRunnable_(id referent, id<JavaLangRunnable> thunk) NS_RETURNS_RETAINED;

__attribute__((unused)) static SunMiscCleaner *create_SunMiscCleaner_initWithId_withJavaLangRunnable_(id referent, id<JavaLangRunnable> thunk);

@interface SunMiscCleaner_1 : NSObject < JavaSecurityPrivilegedAction > {
 @public
  NSException *val$x_;
}

- (instancetype)initWithNSException:(NSException *)capture$0;

- (JavaLangVoid *)run;

@end

J2OBJC_EMPTY_STATIC_INIT(SunMiscCleaner_1)

__attribute__((unused)) static void SunMiscCleaner_1_initWithNSException_(SunMiscCleaner_1 *self, NSException *capture$0);

__attribute__((unused)) static SunMiscCleaner_1 *new_SunMiscCleaner_1_initWithNSException_(NSException *capture$0) NS_RETURNS_RETAINED;

__attribute__((unused)) static SunMiscCleaner_1 *create_SunMiscCleaner_1_initWithNSException_(NSException *capture$0);

J2OBJC_INITIALIZED_DEFN(SunMiscCleaner)

@implementation SunMiscCleaner

+ (SunMiscCleaner *)addWithSunMiscCleaner:(SunMiscCleaner *)cl {
  return SunMiscCleaner_addWithSunMiscCleaner_(cl);
}

+ (jboolean)removeWithSunMiscCleaner:(SunMiscCleaner *)cl {
  return SunMiscCleaner_removeWithSunMiscCleaner_(cl);
}

- (instancetype)initWithId:(id)referent
      withJavaLangRunnable:(id<JavaLangRunnable>)thunk {
  SunMiscCleaner_initWithId_withJavaLangRunnable_(self, referent, thunk);
  return self;
}

+ (SunMiscCleaner *)createWithId:(id)ob
            withJavaLangRunnable:(id<JavaLangRunnable>)thunk {
  return SunMiscCleaner_createWithId_withJavaLangRunnable_(ob, thunk);
}

- (void)clean {
  if (!SunMiscCleaner_removeWithSunMiscCleaner_(self)) return;
  @try {
    [((id<JavaLangRunnable>) nil_chk(thunk_)) run];
  }
  @catch (NSException *x) {
    JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_(create_SunMiscCleaner_1_initWithNSException_(x));
  }
}

- (void)dealloc {
  JreCheckFinalize(self, [SunMiscCleaner class]);
  RELEASE_(next_);
  RELEASE_(prev_);
  RELEASE_(thunk_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LSunMiscCleaner;", 0x2a, 0, 1, -1, -1, -1, -1 },
    { NULL, "Z", 0x2a, 2, 1, -1, -1, -1, -1 },
    { NULL, NULL, 0x2, -1, 3, -1, -1, -1, -1 },
    { NULL, "LSunMiscCleaner;", 0x9, 4, 3, -1, -1, -1, -1 },
    { NULL, "V", 0x1, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(addWithSunMiscCleaner:);
  methods[1].selector = @selector(removeWithSunMiscCleaner:);
  methods[2].selector = @selector(initWithId:withJavaLangRunnable:);
  methods[3].selector = @selector(createWithId:withJavaLangRunnable:);
  methods[4].selector = @selector(clean);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "dummyQueue", "LJavaLangRefReferenceQueue;", .constantValue.asLong = 0, 0x1a, -1, 5, 6, -1 },
    { "first", "LSunMiscCleaner;", .constantValue.asLong = 0, 0xa, -1, 7, -1, -1 },
    { "next_", "LSunMiscCleaner;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "prev_", "LSunMiscCleaner;", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
    { "thunk_", "LJavaLangRunnable;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "add", "LSunMiscCleaner;", "remove", "LNSObject;LJavaLangRunnable;", "create", &SunMiscCleaner_dummyQueue, "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", &SunMiscCleaner_first, "Ljava/lang/ref/PhantomReference<Ljava/lang/Object;>;" };
  static const J2ObjcClassInfo _SunMiscCleaner = { "Cleaner", "sun.misc", ptrTable, methods, fields, 7, 0x1, 5, 5, -1, -1, -1, 8, -1 };
  return &_SunMiscCleaner;
}

+ (void)initialize {
  if (self == [SunMiscCleaner class]) {
    JreStrongAssignAndConsume(&SunMiscCleaner_dummyQueue, new_JavaLangRefReferenceQueue_init());
    JreStrongAssign(&SunMiscCleaner_first, nil);
    J2OBJC_SET_INITIALIZED(SunMiscCleaner)
  }
}

@end

SunMiscCleaner *SunMiscCleaner_addWithSunMiscCleaner_(SunMiscCleaner *cl) {
  SunMiscCleaner_initialize();
  @synchronized(SunMiscCleaner_class_()) {
    if (SunMiscCleaner_first != nil) {
      JreStrongAssign(&((SunMiscCleaner *) nil_chk(cl))->next_, SunMiscCleaner_first);
      JreStrongAssign(&SunMiscCleaner_first->prev_, cl);
    }
    JreStrongAssign(&SunMiscCleaner_first, cl);
    return cl;
  }
}

jboolean SunMiscCleaner_removeWithSunMiscCleaner_(SunMiscCleaner *cl) {
  SunMiscCleaner_initialize();
  @synchronized(SunMiscCleaner_class_()) {
    if (((SunMiscCleaner *) nil_chk(cl))->next_ == cl) return false;
    if (SunMiscCleaner_first == cl) {
      if (cl->next_ != nil) JreStrongAssign(&SunMiscCleaner_first, cl->next_);
      else JreStrongAssign(&SunMiscCleaner_first, cl->prev_);
    }
    if (cl->next_ != nil) JreStrongAssign(&cl->next_->prev_, cl->prev_);
    if (cl->prev_ != nil) JreStrongAssign(&cl->prev_->next_, cl->next_);
    JreStrongAssign(&cl->next_, cl);
    JreStrongAssign(&cl->prev_, cl);
    return true;
  }
}

void SunMiscCleaner_initWithId_withJavaLangRunnable_(SunMiscCleaner *self, id referent, id<JavaLangRunnable> thunk) {
  JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(self, referent, SunMiscCleaner_dummyQueue);
  JreStrongAssign(&self->next_, nil);
  JreStrongAssign(&self->prev_, nil);
  JreStrongAssign(&self->thunk_, thunk);
}

SunMiscCleaner *new_SunMiscCleaner_initWithId_withJavaLangRunnable_(id referent, id<JavaLangRunnable> thunk) {
  J2OBJC_NEW_IMPL(SunMiscCleaner, initWithId_withJavaLangRunnable_, referent, thunk)
}

SunMiscCleaner *create_SunMiscCleaner_initWithId_withJavaLangRunnable_(id referent, id<JavaLangRunnable> thunk) {
  J2OBJC_CREATE_IMPL(SunMiscCleaner, initWithId_withJavaLangRunnable_, referent, thunk)
}

SunMiscCleaner *SunMiscCleaner_createWithId_withJavaLangRunnable_(id ob, id<JavaLangRunnable> thunk) {
  SunMiscCleaner_initialize();
  if (thunk == nil) return nil;
  return SunMiscCleaner_addWithSunMiscCleaner_(create_SunMiscCleaner_initWithId_withJavaLangRunnable_(ob, thunk));
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(SunMiscCleaner)

@implementation SunMiscCleaner_1

- (instancetype)initWithNSException:(NSException *)capture$0 {
  SunMiscCleaner_1_initWithNSException_(self, capture$0);
  return self;
}

- (JavaLangVoid *)run {
  if (JreLoadStatic(JavaLangSystem, err) != nil) [create_JavaLangError_initWithNSString_withNSException_(@"Cleaner terminated abnormally", val$x_) printStackTrace];
  JavaLangSystem_exitWithInt_(1);
  return nil;
}

- (void)dealloc {
  RELEASE_(val$x_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x0, -1, -1, -1, -1, -1, -1 },
    { NULL, "LJavaLangVoid;", 0x1, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(initWithNSException:);
  methods[1].selector = @selector(run);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "val$x_", "LNSException;", .constantValue.asLong = 0, 0x1012, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "LSunMiscCleaner;", "clean", "Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;" };
  static const J2ObjcClassInfo _SunMiscCleaner_1 = { "", "sun.misc", ptrTable, methods, fields, 7, 0x8008, 2, 1, 0, -1, 1, 2, -1 };
  return &_SunMiscCleaner_1;
}

@end

void SunMiscCleaner_1_initWithNSException_(SunMiscCleaner_1 *self, NSException *capture$0) {
  JreStrongAssign(&self->val$x_, capture$0);
  NSObject_init(self);
}

SunMiscCleaner_1 *new_SunMiscCleaner_1_initWithNSException_(NSException *capture$0) {
  J2OBJC_NEW_IMPL(SunMiscCleaner_1, initWithNSException_, capture$0)
}

SunMiscCleaner_1 *create_SunMiscCleaner_1_initWithNSException_(NSException *capture$0) {
  J2OBJC_CREATE_IMPL(SunMiscCleaner_1, initWithNSException_, capture$0)
}
